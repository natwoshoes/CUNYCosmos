#include "homepage.h"
#include "ui_homepage.h"
#include "undergradinfo.h"
#include "gradstudentinfo.h"
#include "ccstudentinfoo.h"

homepage::homepage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::homepage)
{
    ui->setupUi(this);
}

homepage::~homepage()
{
    delete ui;
}

void homepage::on_undergradStudent_clicked()
{
   undergradinfo openundergrad;
   openundergrad.setModal(true);
   openundergrad.exec();

}




void homepage::on_gradStudent_clicked()
{
    gradstudentinfo opengrad;
    opengrad.setModal(true);
    opengrad.exec();

}


void homepage::on_ccStudent_clicked()
{
    ccstudentinfoo opencc;
    opencc.setModal(true);
    opencc.exec();

}

