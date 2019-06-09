#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void log_set(QString data);

private slots:
    void on_exit_button_clicked();

    void on_server_connect_clicked();

    void on_server_disconnect_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
