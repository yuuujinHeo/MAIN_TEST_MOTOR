/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_16;
    QLineEdit *LE_MOTOR_MOVING;
    QLineEdit *LE_MOTOR_CURRENT;
    QLabel *label_2;
    QLineEdit *LE_MOTOR_INIT_STATE;
    QLineEdit *LE_MOTOR_ENCODER;
    QPushButton *BTN_MOTOR_FIND_HOME;
    QLineEdit *LE_MOTOR_SENSOR;
    QLabel *label_17;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_6;
    QLineEdit *LE_MOTOR_CURRENT_3;
    QLabel *label_34;
    QLineEdit *LE_MOTOR_ENCODER_3;
    QLabel *label_33;
    QLineEdit *LE_MOTOR_MOVING_3;
    QLineEdit *LE_MOTOR_INIT_STATE_3;
    QLabel *label_31;
    QLabel *label_32;
    QPushButton *BTN_MOTOR_FIND_HOME_3;
    QLineEdit *LE_MOTOR_CONNECTION;
    QLabel *label_7;
    QFrame *frame_2;
    QLabel *label_5;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLineEdit *LE_LOADCELL_CALIB;
    QLineEdit *LE_LOADCELL_CONNECTION;
    QLabel *label_8;
    QLineEdit *LE_LOADCELL_ERROR;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *LE_LOADCELL_VALUE;
    QPushButton *BTN_SET_CALIB;
    QPushButton *BTN_LOADCELL_TARE;
    QLineEdit *LE_LOADCELL_SETTING_VALUE;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_30;
    QLineEdit *LE_BOARD_CONNECTION;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 534);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 80, 471, 391));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(3);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 431, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Console"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 130, 221, 176));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Console"));
        font1.setPointSize(10);
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);

        gridLayout->addWidget(label_16, 3, 0, 1, 1);

        LE_MOTOR_MOVING = new QLineEdit(layoutWidget);
        LE_MOTOR_MOVING->setObjectName(QString::fromUtf8("LE_MOTOR_MOVING"));
        LE_MOTOR_MOVING->setMinimumSize(QSize(0, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lucida Console"));
        LE_MOTOR_MOVING->setFont(font2);
        LE_MOTOR_MOVING->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_MOTOR_MOVING, 3, 1, 1, 1);

        LE_MOTOR_CURRENT = new QLineEdit(layoutWidget);
        LE_MOTOR_CURRENT->setObjectName(QString::fromUtf8("LE_MOTOR_CURRENT"));
        LE_MOTOR_CURRENT->setMinimumSize(QSize(0, 30));
        LE_MOTOR_CURRENT->setFont(font2);
        LE_MOTOR_CURRENT->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_MOTOR_CURRENT, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        LE_MOTOR_INIT_STATE = new QLineEdit(layoutWidget);
        LE_MOTOR_INIT_STATE->setObjectName(QString::fromUtf8("LE_MOTOR_INIT_STATE"));
        LE_MOTOR_INIT_STATE->setMinimumSize(QSize(0, 30));
        LE_MOTOR_INIT_STATE->setFont(font2);
        LE_MOTOR_INIT_STATE->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_MOTOR_INIT_STATE, 2, 1, 1, 1);

        LE_MOTOR_ENCODER = new QLineEdit(layoutWidget);
        LE_MOTOR_ENCODER->setObjectName(QString::fromUtf8("LE_MOTOR_ENCODER"));
        LE_MOTOR_ENCODER->setMinimumSize(QSize(0, 30));
        LE_MOTOR_ENCODER->setFont(font2);
        LE_MOTOR_ENCODER->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LE_MOTOR_ENCODER, 0, 1, 1, 1);

        BTN_MOTOR_FIND_HOME = new QPushButton(frame);
        BTN_MOTOR_FIND_HOME->setObjectName(QString::fromUtf8("BTN_MOTOR_FIND_HOME"));
        BTN_MOTOR_FIND_HOME->setGeometry(QRect(70, 320, 111, 41));
        BTN_MOTOR_FIND_HOME->setFont(font1);
        LE_MOTOR_SENSOR = new QLineEdit(frame);
        LE_MOTOR_SENSOR->setObjectName(QString::fromUtf8("LE_MOTOR_SENSOR"));
        LE_MOTOR_SENSOR->setGeometry(QRect(220, 80, 121, 30));
        LE_MOTOR_SENSOR->setMinimumSize(QSize(0, 30));
        LE_MOTOR_SENSOR->setFont(font2);
        LE_MOTOR_SENSOR->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(118, 80, 96, 30));
        label_17->setFont(font1);
        layoutWidget_5 = new QWidget(frame);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(240, 130, 221, 176));
        gridLayout_6 = new QGridLayout(layoutWidget_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        LE_MOTOR_CURRENT_3 = new QLineEdit(layoutWidget_5);
        LE_MOTOR_CURRENT_3->setObjectName(QString::fromUtf8("LE_MOTOR_CURRENT_3"));
        LE_MOTOR_CURRENT_3->setMinimumSize(QSize(0, 30));
        LE_MOTOR_CURRENT_3->setFont(font2);
        LE_MOTOR_CURRENT_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_MOTOR_CURRENT_3, 1, 1, 1, 1);

        label_34 = new QLabel(layoutWidget_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font1);

        gridLayout_6->addWidget(label_34, 0, 0, 1, 1);

        LE_MOTOR_ENCODER_3 = new QLineEdit(layoutWidget_5);
        LE_MOTOR_ENCODER_3->setObjectName(QString::fromUtf8("LE_MOTOR_ENCODER_3"));
        LE_MOTOR_ENCODER_3->setMinimumSize(QSize(0, 30));
        LE_MOTOR_ENCODER_3->setFont(font2);
        LE_MOTOR_ENCODER_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_MOTOR_ENCODER_3, 0, 1, 1, 1);

        label_33 = new QLabel(layoutWidget_5);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font1);

        gridLayout_6->addWidget(label_33, 3, 0, 1, 1);

        LE_MOTOR_MOVING_3 = new QLineEdit(layoutWidget_5);
        LE_MOTOR_MOVING_3->setObjectName(QString::fromUtf8("LE_MOTOR_MOVING_3"));
        LE_MOTOR_MOVING_3->setMinimumSize(QSize(0, 30));
        LE_MOTOR_MOVING_3->setFont(font2);
        LE_MOTOR_MOVING_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_MOTOR_MOVING_3, 3, 1, 1, 1);

        LE_MOTOR_INIT_STATE_3 = new QLineEdit(layoutWidget_5);
        LE_MOTOR_INIT_STATE_3->setObjectName(QString::fromUtf8("LE_MOTOR_INIT_STATE_3"));
        LE_MOTOR_INIT_STATE_3->setMinimumSize(QSize(0, 30));
        LE_MOTOR_INIT_STATE_3->setFont(font2);
        LE_MOTOR_INIT_STATE_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(LE_MOTOR_INIT_STATE_3, 2, 1, 1, 1);

        label_31 = new QLabel(layoutWidget_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font1);

        gridLayout_6->addWidget(label_31, 1, 0, 1, 1);

        label_32 = new QLabel(layoutWidget_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font1);

        gridLayout_6->addWidget(label_32, 2, 0, 1, 1);

        BTN_MOTOR_FIND_HOME_3 = new QPushButton(frame);
        BTN_MOTOR_FIND_HOME_3->setObjectName(QString::fromUtf8("BTN_MOTOR_FIND_HOME_3"));
        BTN_MOTOR_FIND_HOME_3->setGeometry(QRect(290, 320, 111, 41));
        BTN_MOTOR_FIND_HOME_3->setFont(font1);
        LE_MOTOR_CONNECTION = new QLineEdit(frame);
        LE_MOTOR_CONNECTION->setObjectName(QString::fromUtf8("LE_MOTOR_CONNECTION"));
        LE_MOTOR_CONNECTION->setGeometry(QRect(220, 50, 121, 30));
        LE_MOTOR_CONNECTION->setMinimumSize(QSize(0, 30));
        LE_MOTOR_CONNECTION->setFont(font2);
        LE_MOTOR_CONNECTION->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(118, 50, 96, 30));
        label_7->setFont(font1);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(510, 80, 271, 391));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(3);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 10, 231, 31));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 60, 231, 140));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        LE_LOADCELL_CALIB = new QLineEdit(layoutWidget1);
        LE_LOADCELL_CALIB->setObjectName(QString::fromUtf8("LE_LOADCELL_CALIB"));
        LE_LOADCELL_CALIB->setMinimumSize(QSize(0, 30));
        LE_LOADCELL_CALIB->setFont(font2);
        LE_LOADCELL_CALIB->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LE_LOADCELL_CALIB, 3, 1, 1, 1);

        LE_LOADCELL_CONNECTION = new QLineEdit(layoutWidget1);
        LE_LOADCELL_CONNECTION->setObjectName(QString::fromUtf8("LE_LOADCELL_CONNECTION"));
        LE_LOADCELL_CONNECTION->setMinimumSize(QSize(0, 30));
        LE_LOADCELL_CONNECTION->setFont(font2);
        LE_LOADCELL_CONNECTION->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LE_LOADCELL_CONNECTION, 0, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        LE_LOADCELL_ERROR = new QLineEdit(layoutWidget1);
        LE_LOADCELL_ERROR->setObjectName(QString::fromUtf8("LE_LOADCELL_ERROR"));
        LE_LOADCELL_ERROR->setMinimumSize(QSize(0, 30));
        LE_LOADCELL_ERROR->setFont(font2);
        LE_LOADCELL_ERROR->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LE_LOADCELL_ERROR, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        LE_LOADCELL_VALUE = new QLineEdit(layoutWidget1);
        LE_LOADCELL_VALUE->setObjectName(QString::fromUtf8("LE_LOADCELL_VALUE"));
        LE_LOADCELL_VALUE->setMinimumSize(QSize(0, 30));
        LE_LOADCELL_VALUE->setFont(font2);
        LE_LOADCELL_VALUE->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(LE_LOADCELL_VALUE, 2, 1, 1, 1);

        BTN_SET_CALIB = new QPushButton(frame_2);
        BTN_SET_CALIB->setObjectName(QString::fromUtf8("BTN_SET_CALIB"));
        BTN_SET_CALIB->setGeometry(QRect(130, 290, 111, 41));
        BTN_SET_CALIB->setFont(font1);
        BTN_LOADCELL_TARE = new QPushButton(frame_2);
        BTN_LOADCELL_TARE->setObjectName(QString::fromUtf8("BTN_LOADCELL_TARE"));
        BTN_LOADCELL_TARE->setGeometry(QRect(70, 240, 111, 41));
        BTN_LOADCELL_TARE->setFont(font1);
        LE_LOADCELL_SETTING_VALUE = new QLineEdit(frame_2);
        LE_LOADCELL_SETTING_VALUE->setObjectName(QString::fromUtf8("LE_LOADCELL_SETTING_VALUE"));
        LE_LOADCELL_SETTING_VALUE->setGeometry(QRect(20, 290, 101, 41));
        LE_LOADCELL_SETTING_VALUE->setFont(font2);
        LE_LOADCELL_SETTING_VALUE->setAlignment(Qt::AlignCenter);
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(230, 30, 302, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font1);

        horizontalLayout->addWidget(label_30);

        LE_BOARD_CONNECTION = new QLineEdit(layoutWidget2);
        LE_BOARD_CONNECTION->setObjectName(QString::fromUtf8("LE_BOARD_CONNECTION"));
        LE_BOARD_CONNECTION->setMinimumSize(QSize(0, 30));
        LE_BOARD_CONNECTION->setFont(font2);
        LE_BOARD_CONNECTION->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(LE_BOARD_CONNECTION);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 801, 31));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 490, 801, 31));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TEST MOTOR", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Current :", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Init State :", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Moving :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Encoder :", nullptr));
        BTN_MOTOR_FIND_HOME->setText(QCoreApplication::translate("MainWindow", "Find Home", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Sensor :", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "Encoder :", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Moving :", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Current :", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Init State :", nullptr));
        BTN_MOTOR_FIND_HOME_3->setText(QCoreApplication::translate("MainWindow", "Find Home", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Connection :", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TEST LOADCELL", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Error :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Connection :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Value :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Calib :", nullptr));
        BTN_SET_CALIB->setText(QCoreApplication::translate("MainWindow", "Set Calib", nullptr));
        BTN_LOADCELL_TARE->setText(QCoreApplication::translate("MainWindow", "Tare", nullptr));
        LE_LOADCELL_SETTING_VALUE->setText(QCoreApplication::translate("MainWindow", "200", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Board Connection :", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "---------------------------------------------------", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "---------------------------------------------------", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
