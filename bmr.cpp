#include "bmr.h"
#include "ui_bmr.h"

bmr::bmr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bmr)
{
    ui->setupUi(this);
}

bmr::~bmr()
{
    delete ui;
}

int bmr::kalkulator(double &waga, double &wzrost, int &wiek, QString &plec)     //funkcja licząca
{

    int bmr;
    if(plec=='m')
    {
        bmr=( 66.5+(13.75*waga)+(5.003*wzrost)-(6.775*wiek));
        return bmr;
    }

    else if(plec=='k')
    {
        bmr=( 655.1+(9.563*waga)+(1.85*wzrost)-(4.676*wiek));
        return bmr;

    }
    else return 0;                                                      //zabezpieczenie funkcji przed błędami
}

void bmr::on_lineEdit_wzrost_editingFinished()                          //zapisywanie danych do zmiennych
{
    wzrost=ui->lineEdit_wzrost->text().toDouble();
}

void bmr::on_lineEdit_wiek_editingFinished()
{
    wiek=ui->lineEdit_wiek->text().toInt();
}

void bmr::on_lineEdit_waga_editingFinished()
{
    waga=ui->lineEdit_waga->text().toDouble();
}

void bmr::on_lineEdit_plec_editingFinished()
{
    plec=ui->lineEdit_plec->text();
}

void bmr::on_pushButton_oblicz_clicked()                            //wywołanie funkcji
{

    ui->lineEdit_bmr->setText(QString::number(kalkulator(wzrost, waga, wiek, plec)));
}

void bmr::on_pushButton_wroc_clicked()
{
    close();
}
