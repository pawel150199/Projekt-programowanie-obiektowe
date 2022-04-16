#include "admin.h"
#include "ui_admin.h"
#include "QMessageBox"
admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_wroc_clicked()
{
    close();
}

void admin::on_pushButton_login_clicked()
{
    QString login = ui -> lineEdit_nazwa -> text();                                           //pobieranie danych użytkownika
    QString haslo = ui -> lineEdit_haslo -> text();

    if(login == "admin" && haslo == "admin")                                                  //sprawdzanie czy dane są poprawne
    {
        QMessageBox::information(this, "Login", "Nazwa użytkownika i hasło są poprawne");
        hide();                                                                               //logowanie i ukrywanie poprzedniego okna
        wnormy = new normy(this);
        wnormy->show();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Nazwa użytkownika i hasło nie są poprawne");     //komunikat o błednych danych
    }
}
