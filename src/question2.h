#ifndef QUESTION2_H
#define QUESTION2_H

#include "questionbase.h" // Include the base class

namespace Ui {
class Question2;
}

class Question2 : public QuestionBase // Inherit from QuestionBase
{
    Q_OBJECT

public:
    explicit Question2(QWidget *parent = nullptr);
    ~Question2();

private slots:
    void on_Venus_clicked();
    void on_Earth_clicked();
    void on_Mars_clicked();
    void on_Mercury_clicked();
    void on_answerWoman_returnPressed();
    void on_Hercules_clicked();
    void on_Europa_clicked();
    void on_Pluto_clicked();
    void on_Enceladus_clicked();

    void on_pushButton_clicked();

private:
    Ui::Question2 *ui;
    // correctAnswers2 is not needed, use correctAnswers from QuestionBase
};

#endif // QUESTION2_H

