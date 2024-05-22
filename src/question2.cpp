#include "question2.h"
#include "ui_question2.h"
#include "QMessageBox"
#include "mainwindow.h"

Question2::Question2(QWidget *parent)
    : QuestionBase(parent), ui(new Ui::Question2)
{
    ui->setupUi(this);
}

Question2::~Question2()
{
    delete ui;
}

void Question2::on_Venus_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Venus->setChecked(false);
}

void Question2::on_Earth_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Earth->setChecked(false);
}

void Question2::on_Mars_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Mars->setChecked(false);
}

void Question2::on_Mercury_clicked()
{
    QMessageBox::information(this, "Response", "That's the correct answer!");
    ui->Mercury->setChecked(true);
    correctAnswers++;
}

void Question2::on_answerWoman_returnPressed()
{
    QString userInput = ui->answerWoman->text();
    if (userInput.compare("valentina", Qt::CaseInsensitive) == 0) {
        QMessageBox::information(this, "Response", "That's the correct answer!");
        correctAnswers++; 
    } else {
        QMessageBox::warning(this, "Response", "Wrong answer");
    }
}

void Question2::on_Hercules_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Hercules->setChecked(false);
}

void Question2::on_Europa_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Europa->setChecked(false);
}

void Question2::on_Pluto_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Pluto->setChecked(false);
}

void Question2::on_Enceladus_clicked()
{
    QMessageBox::information(this, "Response", "That's the correct answer! You got all the questions correct!");
    ui->Enceladus->setChecked(true);
    correctAnswers++; 
}




void Question2::on_pushButton_clicked()
{
    MainWindow *openmain = new MainWindow();
    openmain->show();
    this->close();
}


