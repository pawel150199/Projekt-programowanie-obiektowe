#include "cholesterol.h"
#include "ui_cholesterol.h"
#include <vector>

cholesterol::cholesterol(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cholesterol)
{
    ui->setupUi(this);
}

cholesterol::~cholesterol()
{
    delete ui;
}

void cholesterol::porownanie(double &hdl, double &ldl, std::vector<std::string>wektorNorm)          //wywołanie funkcji porównującej do wektora norm
{
    std::string hdlmin=wektorNorm[24];
    std::string hdlmax=wektorNorm[25];
    std::string::size_type sz;
    double pmin,pmax;
    pmin=std::stod (hdlmin,&sz);                                                                    //konwersja stringa na double
    pmax=std::stod (hdlmax,&sz);
    if (hdl >= pmin && hdl <= pmax)                                                                 //porównanie
        ui->lineEdit_stan->setText("W normie");                                                     //wyświetlenie stanu
    else
        ui->lineEdit_stan->setText("Poza normą");
    ui->lineEdit_min->setText(QString::number(pmin));                                               //wyświetlenie norm
    ui->lineEdit_max->setText(QString::number(pmax));

    std::string ldlmin=wektorNorm[26];
    std::string ldlmax=wektorNorm[27];
    pmin=std::stod (ldlmin,&sz);
    pmax=std::stod (ldlmax,&sz);
    if (ldl >= pmin && ldl <= pmax)
        ui->lineEdit_stan_2->setText("W normie");
    else
        ui->lineEdit_stan_2->setText("Poza normą");
    ui->lineEdit_min_2->setText(QString::number(pmin));
    ui->lineEdit_max_2->setText(QString::number(pmax));
}

void cholesterol::on_lineEdit_hdl_editingFinished()                                                 //zapisywanie danych do zmiennych
{
    hdl=ui->lineEdit_hdl->text().toDouble();
}

void cholesterol::on_lineEdit_ldl_editingFinished()
{
    ldl=ui->lineEdit_ldl->text().toDouble();
}

void cholesterol::on_pushButton_2_clicked()
{
    advektor();                                                                                     //wczytanie wektora
    porownanie(hdl,ldl,wektorNorm);                                                                 //wywołanie funkcji
}

void cholesterol::on_pushButton_clicked()
{
    close();                                                                                        //zamknięcie okna
}
