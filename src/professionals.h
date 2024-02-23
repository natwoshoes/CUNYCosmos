#ifndef PROFESSIONALS_H
#define PROFESSIONALS_H

#include <QDialog>

namespace Ui {
class professionals;
}

class professionals : public QDialog
{
    Q_OBJECT

public:
    explicit professionals(QWidget *parent = nullptr);
    ~professionals();

private:
    Ui::professionals *ui;

    void on_JudithButton_clicked();

};

#endif // PROFESSIONALS_H
