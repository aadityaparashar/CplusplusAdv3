/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *server_connect;
    QToolButton *exit_button;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QToolButton *toolButton_2;
    QToolButton *server_disconnect;
    QTextEdit *textEdit;
    QTextBrowser *server_messages;
    QTextBrowser *connection_log;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(642, 448);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        server_connect = new QToolButton(centralWidget);
        server_connect->setObjectName(QString::fromUtf8("server_connect"));
        server_connect->setGeometry(QRect(10, 10, 111, 21));
        exit_button = new QToolButton(centralWidget);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(130, 20, 91, 21));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 90, 121, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 101, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 180, 121, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 10, 81, 16));
        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setGeometry(QRect(20, 170, 141, 19));
        server_disconnect = new QToolButton(centralWidget);
        server_disconnect->setObjectName(QString::fromUtf8("server_disconnect"));
        server_disconnect->setGeometry(QRect(10, 10, 111, 21));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 120, 151, 41));
        server_messages = new QTextBrowser(centralWidget);
        server_messages->setObjectName(QString::fromUtf8("server_messages"));
        server_messages->setGeometry(QRect(410, 200, 221, 191));
        connection_log = new QTextBrowser(centralWidget);
        connection_log->setObjectName(QString::fromUtf8("connection_log"));
        connection_log->setGeometry(QRect(480, 30, 151, 151));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 642, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        server_connect->setText(QApplication::translate("MainWindow", "Connect to Server", nullptr));
        exit_button->setText(QApplication::translate("MainWindow", "Exit application", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Curve 1", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Curve 2", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "Curve 3", nullptr));

        label->setText(QApplication::translate("MainWindow", "Select Curve type: ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Messages from Server: ", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Connection log:", nullptr));
        toolButton_2->setText(QApplication::translate("MainWindow", "Send message to Server", nullptr));
        server_disconnect->setText(QApplication::translate("MainWindow", "Disconnect  Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
