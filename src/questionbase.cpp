#ifndef QUESTIONBASE_H
#define QUESTIONBASE_H

#include <QDialog>
#include <QString>

class QuestionBase : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionBase(QWidget *parent = nullptr);
    void showResponse(bool isCorrect, const QString &message);

protected:
    int correctAnswers;
};

#endif // QUESTIONBASE_H

