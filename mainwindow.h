#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "lan2can.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    LAN2CAN *lan2can;

private slots:
    void onTimer();
    void on_BTN_MOTOR_FIND_HOME_clicked();

    void on_BTN_LOADCELL_TARE_clicked();

    void on_BTN_SET_CALIB_clicked();

    void on_BTN_MOTOR_FIND_HOME_3_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
};
#endif // MAINWINDOW_H
