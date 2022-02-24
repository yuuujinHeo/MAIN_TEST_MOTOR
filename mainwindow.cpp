#include "mainwindow.h"
#include "ui_mainwindow.h"

void LEGOOD(QLineEdit *le){
    le->setStyleSheet("QLineEdit{background-color:#86E57F}");
}
void LEBAD(QLineEdit *le){
    le->setStyleSheet("QLineEdit{background-color:#F15F5F}");
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    lan2can = new LAN2CAN();

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT(onTimer()));
    timer->start(200);


    ui->centralwidget->setStyleSheet("QWidget{background-color:#EAEAEA}");
    ui->frame->setStyleSheet("QWidget{background-color:#FFFFFF}");
    ui->frame_2->setStyleSheet("QWidget{background-color:#FFFFFF}");
    ui->BTN_LOADCELL_TARE->setStyleSheet("QWidget{background-color:#8C8C8C}");
    ui->BTN_MOTOR_FIND_HOME->setStyleSheet("QWidget{background-color:#8C8C8C}");
    ui->BTN_MOTOR_FIND_HOME_3->setStyleSheet("QWidget{background-color:#8C8C8C}");
    ui->BTN_SET_CALIB->setStyleSheet("QWidget{background-color:#8C8C8C}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTimer(){
    //Board==============================================================================
    if(lan2can->sockConnectionStatus == true){
        LEGOOD(ui->LE_BOARD_CONNECTION);
    }else{
        LEBAD(ui->LE_BOARD_CONNECTION);
    }

    //Motor==============================================================================
    if(lan2can->Motor_Data[0].connection == 1){
        LEGOOD(ui->LE_MOTOR_CONNECTION);
    }else{
        LEBAD(ui->LE_MOTOR_CONNECTION);
    }

    if(lan2can->Motor_Data[0].init_state[0] == 1){
        LEGOOD(ui->LE_MOTOR_INIT_STATE);
    }else{
        LEBAD(ui->LE_MOTOR_INIT_STATE);
    }
    if(lan2can->Motor_Data[0].moving_state[0] == 1){
        LEGOOD(ui->LE_MOTOR_MOVING);
    }else{
        LEBAD(ui->LE_MOTOR_MOVING);
    }
    if(lan2can->Motor_Data[0].init_state[1] == 1){
        LEGOOD(ui->LE_MOTOR_INIT_STATE_3);
    }else{
        LEBAD(ui->LE_MOTOR_INIT_STATE_3);
    }
    if(lan2can->Motor_Data[0].moving_state[1] == 1){
        LEGOOD(ui->LE_MOTOR_MOVING_3);
    }else{
        LEBAD(ui->LE_MOTOR_MOVING_3);
    }

    ui->LE_MOTOR_ENCODER->setText(QString().sprintf("%d",lan2can->Motor_Data[0].encoder[0]));
    ui->LE_MOTOR_CURRENT->setText(QString().sprintf("%d",lan2can->Motor_Data[0].current[0]));
    ui->LE_MOTOR_ENCODER_3->setText(QString().sprintf("%d",lan2can->Motor_Data[0].encoder[1]));
    ui->LE_MOTOR_CURRENT_3->setText(QString().sprintf("%d",lan2can->Motor_Data[0].current[1]));

    ui->LE_MOTOR_SENSOR->setText(QString().sprintf("%d",lan2can->Motor_Data[0].sonar));


    //Loadcell==============================================================================
    if(lan2can->Loadcell_Data[0].connection == 1){
        LEGOOD(ui->LE_LOADCELL_CONNECTION);
    }else{
        LEBAD(ui->LE_LOADCELL_CONNECTION);
    }
    if(lan2can->Loadcell_Data[0].error == 1){
        LEGOOD(ui->LE_LOADCELL_ERROR);
    }else{
        LEBAD(ui->LE_LOADCELL_ERROR);
    }
    ui->LE_LOADCELL_VALUE->setText(QString().sprintf("%d",lan2can->Loadcell_Data[0].value));
    ui->LE_LOADCELL_CALIB->setText(QString().sprintf("%d",lan2can->Loadcell_Data[0].calib));
}

void MainWindow::on_BTN_MOTOR_FIND_HOME_clicked()
{
    lan2can->SendControlData(0x05, 0x00, 0x01, 0x00, 0);
}

void MainWindow::on_BTN_LOADCELL_TARE_clicked()
{
    lan2can->SendControlData(0x06, 0, 0x02, 0, 0);
}

void MainWindow::on_BTN_SET_CALIB_clicked()
{
    lan2can->SendControlData(0x06, 0, 0x03, 0, ui->LE_LOADCELL_SETTING_VALUE->text().toInt());
}

void MainWindow::on_BTN_MOTOR_FIND_HOME_3_clicked()
{
    lan2can->SendControlData(0x05, 0x00, 0x01, 0x01, 0);
}
