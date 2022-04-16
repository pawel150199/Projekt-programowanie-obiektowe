#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include "normy.h"
namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_pushButton_wroc_clicked();              //sygnał wciśniętego guzika

    void on_pushButton_login_clicked();

private:
    Ui::admin *ui;

    normy *wnormy;
};

#endif // ADMIN_H
