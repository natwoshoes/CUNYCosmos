#include "question1.h"
#include "ui_question1.h"
#include "QMessageBox"
#include "question2.h"

Question1::Question1(QWidget *parent)
    : QuestionBase(parent) // Call the constructor of QuestionBase
    , ui(new Ui::Question1)
{
    ui->setupUi(this);
}

Question1::~Question1()
{
    delete ui;
}

void Question1::on_Ans12_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Ans12->setChecked(false);
}

void Question1::on_Ans7_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Ans7->setChecked(false);
}

void Question1::on_Ans8_clicked()
{
    QMessageBox::information(this, "Response", "That's the correct answer!");
    ui->Ans8->setChecked(true);
    correctAnswers++; // correctAnswers is inherited from QuestionBase
}

void Question1::on_Ans1_clicked()
{
    QMessageBox::warning(this, "Response", "Wrong answer");
    ui->Ans1->setChecked(false);
}

void Question1::on_lineEdit_returnPressed()
{
    QString userInput = ui->lineEdit->text();

    if (userInput.compare("gargantua", Qt::CaseInsensitive) == 0) {
        QMessageBox::information(this, "Response", "That's the correct answer!");
        correctAnswers++; // correctAnswers is inherited from QuestionBase
    } else {
        QMessageBox::warning(this, "Response", "Wrong answer");
    }
}

void Question1::on_pushButton_clicked()
{
    if (correctAnswers == 2) {
        // Open the new dialog if the user has answered both questions correctly
        Question2 openq2;
        openq2.setModal(true);
        this->hide();
        openq2.exec();
        this->show();
    } else {
        // Show an error message if the user has not answered both questions correctly
        QMessageBox::warning(this, "Error", "You need to get both questions right to proceed.");
    }
}
