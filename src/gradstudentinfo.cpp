#include "gradstudentinfo.h"
#include "ui_gradstudentinfo.h"

gradstudentinfo::gradstudentinfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gradstudentinfo)
{
    ui->setupUi(this);
}

gradstudentinfo::~gradstudentinfo()
{
    delete ui;
}
