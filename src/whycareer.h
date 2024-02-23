#ifndef WHYCAREER_H
#define WHYCAREER_H

#include <QDialog>

namespace Ui {
class whycareer;
}

class whycareer : public QDialog
{
    Q_OBJECT

public:
    explicit whycareer(QWidget *parent = nullptr);
    ~whycareer();

private slots:
    void on_quizButton_clicked();

private:
    Ui::whycareer *ui;
};

#endif // WHYCAREER_H
