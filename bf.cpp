#include "bf.h"
#include "ui_bf.h"

bf::bf(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bf)
{
    ui->setupUi(this);
}

bf::~bf()
{
    delete ui;
}
void bf::wyniki(double &abf)                                        //wirtualna funkcja wyświetlająca
{
    bbf = waga - abf;
    cbf = (bbf/waga)*100;
    ui->lineEdit_bf->setText(QString::number(abf));
    ui->lineEdit_bf_2->setText(QString::number(bbf));
    ui->lineEdit_bf_3->setText(QString::number(cbf));

}
void bf::kalkulator(double &waga, double &wzrost,  QString &plec)    //funkcja licząca
{
    double abf;
    if(plec=='m')
    {
        abf=(0.407*waga)+(0.267*wzrost)-19.2;
        wyniki(abf);
    }

    else if(plec=='k')
    {
        abf=(0.252*waga)+(0.473*wzrost)-48.3;
        wyniki(abf);
    }
    else  wyniki(abf=0);                                            //wywołanie funkcji wyświetlającej oraz zabezpieczenie funkcji przed innymi wpisami

}

void bf::on_lineEdit_waga_editingFinished()                         //wpisywanie danych do zmiennych
{
    waga=ui->lineEdit_waga->text().toDouble();
}

void bf::on_lineEdit_wzrost_editingFinished()
{
    wzrost=ui->lineEdit_wzrost->text().toDouble();
}

void bf::on_lineEdit_plec_editingFinished()
{
    plec=ui->lineEdit_plec->text();
}

void bf::on_pushButton_oblicz_clicked()                             //przycisk aktywujący proces liczenia i wyświetlania
{
    kalkulator(waga,wzrost,plec);
}

void bf::on_pushButton_clicked()                                    //zamykanie okna
{
    close();
}
