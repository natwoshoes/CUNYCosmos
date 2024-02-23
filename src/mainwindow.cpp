#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginpage.h"
#include "signuppage.h"
#include "whycareer.h"
#include "professionals.h"
#include "QLineEdit"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    loginpage userlog;
    userlog.setModal(true);

    this->hide(); // Hide the current window
    userlog.exec(); // This will show the loginpage dialog and wait until it's closed
    this->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    signuppage usersign;
    usersign.setModal(true);

    this->hide(); // Hide the current window
    usersign.exec(); // This will show the signuppage dialog and wait until it's closed
    this->show(); // Show the current window again
}



void MainWindow::on_pushButton_3_clicked()
{
    whycareer missionstatement;
    missionstatement.setModal(true);

    this->hide(); // Hide the current window
    missionstatement.exec(); // This will show the missionstatement dialog and wait until it's closed
    this->show(); // Show the current window again
}



void MainWindow::on_professionals_clicked()
{
    professionals openprof;
    openprof.setModal(true);

    this->hide(); // or this->close() if you want to close the current dialog
    openprof.exec();
    this->show(); // Optional: Show the dialog again after the new one is closed
}


