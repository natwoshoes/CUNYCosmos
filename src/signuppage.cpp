#include "signuppage.h"
#include "ui_signuppage.h"
#include "ccstudentinfoo.h"
#include "gradstudentinfo.h"
#include "undergradinfo.h"
#include "homepage.h"
#include <QString>
#include <QMessageBox>
#include "QFile"

signuppage::signuppage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signuppage)
{
    ui->setupUi(this);
}

signuppage::~signuppage()
{
    delete ui;
}

void signuppage::on_DONESU_clicked()
{
    try {
        QString email = ui->emailLineSU->text();

        // Updated email validation
        if (!email.contains("cuny.edu", Qt::CaseInsensitive)) {
            throw InvalidEmailException("Email must be a CUNY email address.");
        }

        // Check if the undergrad checkbox is clicked
        if (ui->undergradCheck->isChecked()) {
            // If email is valid and the user is an undergrad, open undergrad window
            undergradinfo openunder;
            openunder.setModal(true);
            openunder.exec();
        }
        // Check if the community college student checkbox is clicked
        else if (ui->ccStudent->isChecked()) {
            ccstudentinfoo opencc;
            opencc.setModal(true);
            opencc.exec();
        }

        else if (ui->gradStudent->isChecked()) {
            gradstudentinfo opengrad;
            opengrad.setModal(true);
            opengrad.exec();
        }
        // If neither checkbox is checked, open homepage
        else {
            homepage gohome;
            gohome.setModal(true);
            gohome.exec();
        }

    } catch (const InvalidEmailException& e) {
        // Show an error message to the user
        QMessageBox::critical(this, "Invalid Email", e.what());
    }
}




void signuppage::on_emailLineSU_editingFinished()
{
        QString text = ui->emailLineSU->text();
        QString filePath = "/Users/natasha/Desktop/signupinfo.txt";

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











