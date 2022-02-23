#include "lan2can.h"

using namespace std;
LAN2CAN::LAN2CAN()
{

    sockConnectionStatus = false;
    connection_count = 0;

    connect(&socket, SIGNAL(connected()), this, SLOT(onSockConnected()));
    connect(&socket, SIGNAL(disconnected()), this, SLOT(onSockDisconnected()));
    connect(&socket, SIGNAL(readyRead()), this, SLOT(onSockReadyRead()));

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    timer->start(2000);
}


void LAN2CAN::onTimer()
{
    if(sockConnectionStatus == false)
        if(socket.state() == QAbstractSocket::UnconnectedState)
            socket.connectToHost("192.168.100.120", 1977);

}



void LAN2CAN::onSockConnected(){
    recvBuf.clear();
    connection_count = 0;
    sockConnectionStatus = true;
    qDebug() << "Connected";
}
void LAN2CAN::onSockDisconnected(){
    sockConnectionStatus = false;
    qDebug() << "Disconnected";
}

void LAN2CAN::onSockReadyRead(){
    unsigned char tempPacketData[10000];

    QByteArray datas = socket.readAll();
    recvBuf += datas;
    char *precvBuf;

    int end_pos = 0;
    int tcp_size;

    while(1){

        tcp_size = recvBuf.size();
        precvBuf = recvBuf.data();

        if(tcp_size < 4){
            break;
        }

        if(uchar(recvBuf[0]) == 0x24){
            if(tcp_size >= 4){
                int packet_length = (short)(uchar(recvBuf[1]) | (uchar(recvBuf[2])<<8));
                if(packet_length < 0 || packet_length > 10000){
                    recvBuf.remove(0, 1);
                }else{
                    end_pos = packet_length + 3 - 1;

                    if(tcp_size >= packet_length + 3){
                        memcpy(tempPacketData, precvBuf, packet_length+3);

                        if(uchar(tempPacketData[0]) == 0x24 && uchar(tempPacketData[packet_length + 3 - 1]) == 0x25){
                            connection_count = 0;
                            int data_type = uchar(tempPacketData[5]);

                            if(data_type == 0xA5){
                                // Outlet
                                int index = 6;
                                for(int i=0; i<2; i++){
                                    Motor_Data[i].connection = tempPacketData[index];
                                    Motor_Data[i].encoder[0] = int(tempPacketData[index+1] | (tempPacketData[index+2]<<8) | (tempPacketData[index+3]<<16) | (tempPacketData[index+4]<<24));
                                    Motor_Data[i].encoder[1] = int(tempPacketData[index+5] | (tempPacketData[index+6]<<8) | (tempPacketData[index+7]<<16) | (tempPacketData[index+8]<<24));
                                    Motor_Data[i].current[0] = int(tempPacketData[index+9] | (tempPacketData[index+10]<<8) | (tempPacketData[index+11]<<16) | (tempPacketData[index+12]<<24));
                                    Motor_Data[i].current[1] = int(tempPacketData[index+13] | (tempPacketData[index+14]<<8) | (tempPacketData[index+15]<<16) | (tempPacketData[index+16]<<24));
                                    Motor_Data[i].status[0] = tempPacketData[index+17];
                                    Motor_Data[i].status[1] = tempPacketData[index+18];
                                    Motor_Data[i].init_state[0] = tempPacketData[index+19];

                                    Motor_Data[i].init_state[1] = tempPacketData[index+20];
                                    Motor_Data[i].moving_state[0] = tempPacketData[index+21];
                                    Motor_Data[i].moving_state[1] = tempPacketData[index+22];
                                    Motor_Data[i].sonar = tempPacketData[index+23];
                                    Motor_Data[i].sonar_error = tempPacketData[index+24];
                                    index += 35;
                                }
                            }else if(data_type == 0xA6){
                                // Soda Dispenser
                                int index = 6;

                                for(int i=0; i<1; i++){
                                    Loadcell_Data[i].connection = tempPacketData[index];

                                    Loadcell_Data[i].value = short(tempPacketData[index+1] | (tempPacketData[index+2]<<8));
                                    Loadcell_Data[i].calib = short(tempPacketData[index+3] | (tempPacketData[index+4]<<8));
                                    Loadcell_Data[i].error = tempPacketData[index+5];
                                    index += 9;
                                }
                            }
                        }else{
                        }
                        recvBuf.remove(0, end_pos);
                    }else{
                        recvBuf.remove(0, 1);
                    }
                }
            }
        }else{
            recvBuf.remove(0, 1);
        }
    }
}


void LAN2CAN::SendControlData(int dev_send_id, int target, int command, int para1, int para2){
    if(sockConnectionStatus == true){
        // Send Control Data ---------------------
        char send_byte[256];
        send_byte[0] = 0x24;            // HEADER
        unsigned int TotalDataLength = 14;
        send_byte[1] = char((TotalDataLength)&0xFF);       // Total data length
        send_byte[2] = char((TotalDataLength>>8)&0xFF);    // Total data length
        send_byte[3] = 0x00;               // From (Master : 0, Slave(CAN) : 1, General interface board : 2)
        send_byte[4] = 0x01;               // To (Master : 0, Slave(CAN) : 1, General interface board : 2)
        // dev_id
        // 0x01 : cup dispenser
        send_byte[5] = dev_send_id;
        send_byte[6] = char((target)&0xFF);
        send_byte[7] = char((command)&0xFF);
        send_byte[8] = char((para1)&0xFF);
        send_byte[9] = char((para1>>8)&0xFF);
        send_byte[10] = char((para1>>16)&0xFF);
        send_byte[11] = char((para1>>24)&0xFF);
        send_byte[12] = char((para2)&0xFF);
        send_byte[13] = char((para2>>8)&0xFF);
        send_byte[14] = char((para2>>16)&0xFF);
        send_byte[15] = char((para2>>24)&0xFF);
        send_byte[16] = 0x25;

        socket.write(send_byte, TotalDataLength+3);
    }
}

