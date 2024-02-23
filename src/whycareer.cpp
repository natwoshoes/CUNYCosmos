#include "whycareer.h"
#include "ui_whycareer.h"
#include "spacequiz.h"

whycareer::whycareer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::whycareer)
{
    ui->setupUi(this);
}

whycareer::~whycareer()
{
    delete ui;
}

void whycareer::on_quizButton_clicked()
{
    spacequiz gotoquiz;
    gotoquiz.setModal(true);
    this->hide();
    gotoquiz.exec();
    this->show();

}

