#include "bsa.h"
#include "ui_bsa.h"
#include <math.h>

bsa::bsa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bsa)
{
    ui->setupUi(this);
}

bsa::~bsa()
{
    delete ui;
}

void bsa::wyniki(double &absa)                          //funkcja wyświetlająca
{
    ui->lineEdit_bsa->setText(QString::number(absa));
}

void bsa::kalkulator(double &wzrost, double &waga)       //funkcja licząca
{

    absa = 0.01666667*sqrt(wzrost)*sqrt(waga);
    wyniki(absa);
}

void bsa::on_lineEdit_waga_editingFinished()            //zapisywanie danych do zmiennych
{
    waga=ui->lineEdit_waga->text().toDouble();
}

void bsa::on_lineEdit_wzrost_editingFinished()
{
    wzrost=ui->lineEdit_wzrost->text().toDouble();
}

void bsa::on_pushButton_oblicz_clicked()                 //wywołanie funkcji
{
    kalkulator(wzrost,waga);
}

void bsa::on_pushButton_wroc_clicked()
{
    close();                                              //zamknięcie okna
}
