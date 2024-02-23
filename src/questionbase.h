#ifndef QUESTIONBASE_H
#define QUESTIONBASE_H

#include <QDialog>

class QuestionBase : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionBase(QWidget *parent = nullptr)
        : QDialog(parent), correctAnswers(0) {}

protected:
    int correctAnswers;
};

#endif // QUESTIONBASE_H

