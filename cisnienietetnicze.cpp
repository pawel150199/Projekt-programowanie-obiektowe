#include "cisnienietetnicze.h"
#include "ui_cisnienietetnicze.h"

cisnienietetnicze::cisnienietetnicze(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cisnienietetnicze)
{
    ui->setupUi(this);
}

cisnienietetnicze::~cisnienietetnicze()
{
    delete ui;
}

void cisnienietetnicze::cisnienie(int &lewa, int &prawa)                                //funkcja porównująca
{
    if ((lewa <120&&lewa>0)||(prawa>0&&prawa<80))                                       //porównanie
    {
        ui->lineEdit_cisnienie->setText("Hipotensja");                                  //wyświetlenie
    }
    else if ((lewa >=120&&lewa<130)||(prawa>=80&&prawa<85))
    {
        ui->lineEdit_cisnienie->setText ("Ciśnienie prawidłowe");
    }
    else if ((lewa >=130&&lewa<140)||(prawa>=85&&prawa<90))
    {
        ui->lineEdit_cisnienie->setText ("Ciśnienie wysokie prawidłowe");
    }
    else if ((lewa >=140&&lewa<160)||(prawa>=90&&prawa<100))
    {
        ui->lineEdit_cisnienie->setText ("Nadciśnienie tętnicze 1. stopnia:");
    }
    else if ((lewa >=160&&lewa<179)||(prawa>=100&&prawa<110))
    {
        ui->lineEdit_cisnienie->setText ("Nadciśnienie tętnicze 2. stopnia:");
    }
    else if ((lewa >=180&&lewa<250)||(prawa>=110&&prawa<150))
    {
        ui->lineEdit_cisnienie->setText ("Nadciśnienie tętnicze 3. stopnia:");
    }
    else ui->lineEdit_cisnienie->setText( "Błąd");                                      //zabezpieczenie przed błędami
}

void cisnienietetnicze::on_lineEdit_lewa_editingFinished()                              //zapis danych do zmiennych
{
    lewa=ui->lineEdit_lewa->text().toDouble();
}

void cisnienietetnicze::on_lineEdit_prawa_editingFinished()
{
    prawa=ui->lineEdit_prawa->text().toDouble();
}

void cisnienietetnicze::on_pushButton_sprawdz_clicked()                                 //wywołanie funkcji
{
    cisnienie(lewa,prawa);
}

void cisnienietetnicze::on_pushButton_wroc_clicked()                                    //zamknięcie okna
{
    close();
}
