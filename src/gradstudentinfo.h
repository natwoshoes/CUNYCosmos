#ifndef GRADSTUDENTINFO_H
#define GRADSTUDENTINFO_H

#include <QDialog>

namespace Ui {
class gradstudentinfo;
}

class gradstudentinfo : public QDialog
{
    Q_OBJECT

public:
    explicit gradstudentinfo(QWidget *parent = nullptr);
    ~gradstudentinfo();

private:
    Ui::gradstudentinfo *ui;
};

#endif // GRADSTUDENTINFO_H
