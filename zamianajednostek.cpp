#include "zamianajednostek.h"
#include "ui_zamianajednostek.h"

zamianajednostek::zamianajednostek(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zamianajednostek)
{
    ui->setupUi(this);
}

zamianajednostek::~zamianajednostek()
{
    delete ui;
}
void zamianajednostek::wyniki(double &a, double &b, double &c)                  //funkcja wyświetlająca
{
    ui->lineEdit_1->setText(QString::number(a));
    ui->lineEdit_2->setText(QString::number(b));
    ui->lineEdit_3->setText(QString::number(c));
}
void zamianajednostek::kalkulator(double &a,double &b,double &c)                 //funkcja licząca
{

    if (a!=0)
    {
        b=a*0.621;
        c=a*1000;
    }

    else if (b!=0)
    {
        a=b*1.61;
        c=b*1610.3;
    }

    else if (c!=0)
    {
        a=c/1000;
        b=a*0.621;
    }
    else a=0,b=0,c=0;

    wyniki(a,b,c);
}

void zamianajednostek::on_lineEdit_1_editingFinished()                      //zapis danych do zmiennych
{
    a=ui->lineEdit_1->text().toDouble();
}

void zamianajednostek::on_lineEdit_2_editingFinished()
{
    b=ui->lineEdit_2->text().toDouble();
}

void zamianajednostek::on_lineEdit_3_editingFinished()
{
    c=ui->lineEdit_3->text().toDouble();
}

void zamianajednostek::on_pushButton_oblicz_clicked()                        //wywoałenie konwersji jednostek
{
    kalkulator(a,b,c);
}

void zamianajednostek::on_pushButton_wyzeruj_clicked()                       //przycisk zerujący
{
    a=0,b=0,c=0;
    ui->lineEdit_1->setText(QString::number(0));
    ui->lineEdit_2->setText(QString::number(0));
    ui->lineEdit_3->setText(QString::number(0));
}

void zamianajednostek::on_pushButton_wroc_clicked()                          //zamknięcie okna
{
    close();
}
