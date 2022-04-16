#include "kalkulatorciazy.h"
#include "ui_kalkulatorciazy.h"

kalkulatorciazy::kalkulatorciazy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kalkulatorciazy)
{
    ui->setupUi(this);
}

kalkulatorciazy::~kalkulatorciazy()
{
    delete ui;
}

void kalkulatorciazy::wyniki(int &rok,int &miesiac,int &dzien)                                                                          //funkcja wyświetlająca
{
    ui->lineEdit_miesiac_2->setText( QString::number(rok)+QString("-")+QString::number(miesiac)+QString("-")+QString::number(dzien));   //złożenie wyświetlania z kilku elementów
}
void kalkulatorciazy::kalkulator(int &rok,int &miesiac,int &dzien)                                                                      // funkcja licząca
{
    if (miesiac == 2 && rok % 4 != 0)
    {
        if (dzien + 7 > 28)
        {
            dzien = dzien - 21;
            miesiac = miesiac - 2;
            rok++;
        }
        else
        {
            dzien = dzien + 7;
            miesiac = miesiac - 3;
            rok++;
        }
    }
    if (miesiac == 2 && rok % 4 == 0)
    {
        if (dzien + 7 > 29)
        {
            dzien = dzien - 22;
            miesiac = miesiac - 2;
            rok++;
        }
        else
        {
            dzien = dzien + 7;
            miesiac = miesiac - 3;
            rok++;
        }
    }
    if (miesiac == 4 || miesiac == 6 || miesiac == 9 || miesiac == 11)
    {
        if (dzien + 7 > 30)
        {
            dzien = dzien - 23;
            miesiac = miesiac - 2;
            rok++;
        }
        else
        {
            dzien = dzien + 7;
            miesiac = miesiac - 3;
            rok++;
        }
    }
    if (miesiac == 1 || miesiac == 3 || miesiac == 5 || miesiac == 7 || miesiac == 8 || miesiac == 10 || miesiac == 12)
    {
        if (dzien + 7 > 31)
        {
            dzien = dzien - 24;
            miesiac = miesiac - 2;
            rok++;
        }
        else
        {
            dzien = dzien + 7;
            miesiac = miesiac - 3;
            rok++;
        }
    }
    if (miesiac < 1)
    {
        miesiac = 12 + miesiac;
        rok--;
    }
    if (dzien==0||miesiac==0||rok==0)
    {
        dzien=0,miesiac=0,rok=0;
    }
    wyniki(rok,miesiac,dzien);                                              //wywołanie wyświetlania
}

void kalkulatorciazy::on_lineEdit_dzien_editingFinished()                   //zapis danych do zmiennych
{
    dzien=ui->lineEdit_dzien->text().toInt();
}

void kalkulatorciazy::on_lineEdit_miesiac_editingFinished()
{
    miesiac=ui->lineEdit_miesiac->text().toInt();
}

void kalkulatorciazy::on_lineEdit_rok_editingFinished()
{
    rok=ui->lineEdit_rok->text().toInt();
}

void kalkulatorciazy::on_pushButton_sprawdz_clicked()                       //wywołanie funkcji
{
    kalkulator(rok,miesiac,dzien);
}

void kalkulatorciazy::on_pushButton_wroc_clicked()                          //zamknięcie okna
{
    close();
}


