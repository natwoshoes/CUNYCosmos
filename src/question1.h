#ifndef QUESTION1_H
#define QUESTION1_H

#include "questionbase.h"  // include the header for the base class

namespace Ui {
class Question1;
}

class Question1 : public QuestionBase  // inherit from QuestionBase instead of QDialog
{
    Q_OBJECT

public:
    explicit Question1(QWidget *parent = nullptr);
    ~Question1();

private slots:
    void on_Ans12_clicked();
    void on_Ans7_clicked();
    void on_Ans8_clicked();
    void on_Ans1_clicked();
    void on_lineEdit_returnPressed();
    void on_pushButton_clicked();

private:
    Ui::Question1 *ui;
};

#endif // QUESTION1_H

