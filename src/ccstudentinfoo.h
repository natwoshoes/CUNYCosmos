#ifndef CCSTUDENTINFOO_H
#define CCSTUDENTINFOO_H

#include <QDialog>

namespace Ui {
class ccstudentinfoo;
}

class ccstudentinfoo : public QDialog
{
    Q_OBJECT

public:
    explicit ccstudentinfoo(QWidget *parent = nullptr);
    ~ccstudentinfoo();

private slots:

    void on_CCOSTEM_clicked();

    void on_CCPATHWAYS_clicked();

    void on_CCBLUEORIGIN_clicked();

    void on_CCSPACEX_clicked();

    void on_CCMCA_clicked();

    void on_CCNPWEE_clicked();

    void on_CCNCAS_clicked();

    void on_CCZED_clicked();

    void on_CCBROOKE_clicked();

    void on_CCMATTHEW_clicked();

    void on_CCPATTI_clicked();

private:
    Ui::ccstudentinfoo *ui;
};

#endif // CCSTUDENTINFOO_H
