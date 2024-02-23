#include "loginpage.h"
#include "ui_loginpage.h"
#include "homepage.h"
#include "QFile"
using namespace std;
#include "QDebug"
#include <QMessageBox>


loginpage::loginpage(QWidget *parent) : QDialog(parent), ui(new Ui::loginpage)
{
    ui->setupUi(this);
    //connect(ui->lineEdit, &QLineEdit::editingFinished, this, &loginpage::on_lineEdit_editingFinished);
}


loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_doneLI_clicked()
{
    try {
        QString email = ui->usernameLIEdit->text();

        // Updated email validation (finally working)
        if (!email.contains("cuny.edu", Qt::CaseInsensitive)) {
            throw InvalidEmailExceptionLI("Email must be a CUNY email address.");
        }

        //email valid = open homepage
        homepage gohomeLI;
        gohomeLI.setModal(true);
        gohomeLI.exec();

    } catch (const InvalidEmailExceptionLI& e) {
        // Show an error message to the user
        QMessageBox::critical(this, "Invalid Email", e.what());
    }
}



void loginpage::on_lineEdit_2_editingFinished()
{
    QString text = ui->lineEdit_2->text();
    QString filePath = "/Users/natasha/Desktop/userlogininfo.txt";

    QFile file(filePath);


    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
        QTextStream out(&file);
        out << text;
        file.close();

        qDebug() << "File written successfully to" << file.fileName();
    } else {
        qDebug() << "Error writing file:" << file.errorString();

    }

}




