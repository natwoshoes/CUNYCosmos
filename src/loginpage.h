#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>

namespace Ui {
class loginpage;
}

class InvalidEmailExceptionLI : public std::exception {
private:
    std::string message;

public:
    InvalidEmailExceptionLI(const std::string& msg) : message(msg) {}

    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

class loginpage : public QDialog
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:

    void on_lineEdit_2_editingFinished();

    void on_doneLI_clicked();

private:
    Ui::loginpage *ui;
};

#endif // LOGINPAGE_H
