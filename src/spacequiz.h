#ifndef SPACEQUIZ_H
#define SPACEQUIZ_H

#include <QDialog>

namespace Ui {
class spacequiz;
}

class spacequiz : public QDialog
{
    Q_OBJECT

public:
    explicit spacequiz(QWidget *parent = nullptr);
    ~spacequiz();

private slots:


    void on_startQuiz_clicked();

private:
    Ui::spacequiz *ui;
};

#endif // SPACEQUIZ_H
