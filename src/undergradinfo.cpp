#include "undergradinfo.h"
#include "ui_undergradinfo.h"

undergradinfo::undergradinfo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::undergradinfo)
{
    ui->setupUi(this);
}

undergradinfo::~undergradinfo()
{
    delete ui;
}
