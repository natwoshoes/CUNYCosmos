#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QDialog>
#include <exception>
#include <string>

namespace Ui {
class signuppage;
}

// custom exception class
class InvalidEmailException : public std::exception {
private:
    std::string message;

public:
    InvalidEmailException(const std::string& msg) : message(msg) {}

    virtual const char* what() const noexcept override {
        return message.c_str();
    }
};

class signuppage : public QDialog {
    Q_OBJECT

public:
    explicit signuppage(QWidget *parent = nullptr);
    ~signuppage();

private slots:
    void on_DONESU_clicked();

    void on_emailLineSU_editingFinished();



private:
    Ui::signuppage *ui;
};

#endif // SIGNUPPAGE_H
