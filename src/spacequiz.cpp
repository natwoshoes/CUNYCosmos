#include "spacequiz.h"
#include "ui_spacequiz.h"
#include "question1.h"

spacequiz::spacequiz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::spacequiz)
{
    ui->setupUi(this);
}

spacequiz::~spacequiz()
{
    delete ui;
}


void spacequiz::on_startQuiz_clicked()
{
    Question1 startingquiz;
    startingquiz.setModal(true);

    this->hide();
    startingquiz.exec();
    this->show();
}

