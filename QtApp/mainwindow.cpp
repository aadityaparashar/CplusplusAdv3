#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
   ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exit_button_clicked()
{
   close();
}

void MainWindow::on_server_connect_clicked()
{

    ui->connection_log->append("Connecting pipe");
    ui->server_connect->hide();
    ui->server_disconnect->show();

}
void MainWindow::log_set(QString data){
    ui->connection_log->append("log_set working - "+data);
}

void MainWindow::on_server_disconnect_clicked()
{

    ui->connection_log->append("Disconnecting pipe");
    ui->server_connect->show();
    ui->server_disconnect->hide();
}

//KEEP THIS CAUSE Qt Goes crazy without it
