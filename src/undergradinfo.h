#ifndef UNDERGRADINFO_H
#define UNDERGRADINFO_H

#include <QDialog>

namespace Ui {
class undergradinfo;
}

class undergradinfo : public QDialog
{
    Q_OBJECT

public:
    explicit undergradinfo(QWidget *parent = nullptr);
    ~undergradinfo();

private:
    Ui::undergradinfo *ui;
};

#endif // UNDERGRADINFO_H
