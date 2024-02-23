#include "professionals.h"
#include "ui_professionals.h"
#include "QString"
#include <QFile>
#include <QTextStream>
#include <QDebug>


professionals::professionals(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::professionals)
{
    ui->setupUi(this);
}

professionals::~professionals()
{
    delete ui;
}

void professionals::on_JudithButton_clicked()
{
    QFile file("/Users/natasha/Desktop/judithlovecoheninfo.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        QString JudithInfo;
        while (!stream.atEnd()) { // Simplified condition
            JudithInfo += stream.readLine() + "\n";
        }

        ui->JudithText->setText(JudithInfo);
    } else {
        qDebug() << "Failed to open the file for reading."; // Error handling
    }
}



