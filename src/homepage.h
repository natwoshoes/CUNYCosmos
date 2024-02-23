#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>

namespace Ui {
class homepage;
}

class homepage : public QDialog
{
    Q_OBJECT

public:
    explicit homepage(QWidget *parent = nullptr);
    ~homepage();

private slots:
    void on_undergradStudent_clicked();

    void on_gradStudent_clicked();

    void on_ccStudent_clicked();

private:
    Ui::homepage *ui;
};

#endif // HOMEPAGE_H
