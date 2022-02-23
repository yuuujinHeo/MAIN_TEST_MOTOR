#ifndef LAN2CAN_H
#define LAN2CAN_H

#include <QObject>
#include <QtNetwork>
#include <QTimer>
#include <iostream>


typedef struct _MOTOR_{
    int connection;
    int encoder[2];
    int current[2];
    int moving_state[2];
    int status[2];
    int sonar;
    int init_state[2];
    int sonar_error;
}MOTOR;

typedef struct _LOADCELL_{
    int connection;
    int value;
    int calib;
    int error;
}LOADCELL;

class LAN2CAN : QObject
{
    Q_OBJECT
public:
    LAN2CAN();
    QTcpSocket  socket;
    int sockConnectionStatus;
    void SendControlData(int device, int target, int command, int para1, int para2);

    //Motor
    MOTOR Motor_Data[1];
    LOADCELL Loadcell_Data[1];



public slots:
    void onTimer();
    void onSockConnected();
    void onSockDisconnected();
    void onSockReadyRead();

private:
    QTimer *timer;
    QByteArray recvBuf;

    int connection_count;
};

#endif // LAN2CAN_H
