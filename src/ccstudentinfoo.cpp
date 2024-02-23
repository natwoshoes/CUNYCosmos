#include "ccstudentinfoo.h"
#include "ui_ccstudentinfoo.h"
#include <QDesktopServices>
#include <QUrl>

ccstudentinfoo::ccstudentinfoo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ccstudentinfoo)
{
    ui->setupUi(this);
}

ccstudentinfoo::~ccstudentinfoo()
{
    delete ui;
}



void ccstudentinfoo::on_CCOSTEM_clicked()
{
    QUrl url("https://stemgateway.nasa.gov/public/s/explore-opportunities");
    QDesktopServices::openUrl(url);
    }


void ccstudentinfoo::on_CCPATHWAYS_clicked()
{
    QUrl url("https://www.nasa.gov/careers/pathways/");
    QDesktopServices::openUrl(url);

}


void ccstudentinfoo::on_CCBLUEORIGIN_clicked()
{
    QUrl url("https://www.blueorigin.com/careers/internships");
    QDesktopServices::openUrl(url);

}


void ccstudentinfoo::on_CCSPACEX_clicked()
{
    QUrl url("https://www.spacex.com/careers/jobs/?type=intern");
    QDesktopServices::openUrl(url);

}


void ccstudentinfoo::on_CCMCA_clicked()
{
    QUrl url("https://www.lspace.asu.edu/applications");
    QDesktopServices::openUrl(url);
}


void ccstudentinfoo::on_CCNPWEE_clicked()
{
    QUrl url("https://www.lspace.asu.edu/applications");
    QDesktopServices::openUrl(url);

}


void ccstudentinfoo::on_CCNCAS_clicked()
{
    QUrl url("https://www.nasa.gov/learning-resources/nasa-community-college-aerospace-scholars/");
    QDesktopServices::openUrl(url);
}


void ccstudentinfoo::on_CCZED_clicked()
{
    QUrl url("https://zedfactorfellowship.org/");
    QDesktopServices::openUrl(url);

}


void ccstudentinfoo::on_CCBROOKE_clicked()
{
    QUrl url("https://www.brookeowensfellowship.org/");
    QDesktopServices::openUrl(url);

}


void ccstudentinfoo::on_CCMATTHEW_clicked()
{
    QUrl url("https://www.matthewisakowitzfellowship.org/");
    QDesktopServices::openUrl(url);

}


void ccstudentinfoo::on_CCPATTI_clicked()
{
    QUrl url("https://www.pgsfellowship.org/");
    QDesktopServices::openUrl(url);
}

