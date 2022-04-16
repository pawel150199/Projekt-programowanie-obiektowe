#include "bmi.h"
#include "ui_bmi.h"
#include "plec.h"

bmi::bmi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bmi)
{
    ui->setupUi(this);
}

bmi::~bmi()
{
    delete ui;
}

void bmi::wyniki(double &kbmi, QString &sbmi)                           //funkcja wyświetlająca
{
    ui->lineEdit_bmi->setText(QString::number(kbmi));
    ui->lineEdit_bmi_2->setText(sbmi);
}

double bmi::kalkulator(double &wzrost, double &waga, QString &plec)     //funkcja licząca
{

    if(plec=='m')
    {
        kbmi=waga/(wzrost*wzrost*0.0001);
        return kbmi;
    }

    else if(plec=='k')
    {
        kbmi=(waga/(wzrost*wzrost*0.0001))*0.99;
        return kbmi;

    }
    else return kbmi=0;


}
QString bmi::porownanie(double &kbmi, double &BMI1, double &BMI2, double &BMI3) //funkcja porównująca zakresy
{
    if(kbmi<BMI1)
    {
        return sbmi="niedowaga";
    }
    else if(kbmi>=BMI1&&kbmi<BMI2)
    {
        return sbmi="waga prawidłowa";
    }
    else if(kbmi>=BMI2&&kbmi<=BMI3)
    {
        return sbmi="nadwaga";
    }
    else if (kbmi>BMI3)
    {
        return sbmi="otyłość";
    }
    else return 0;                                          //zabezpieczenie funkcji
}

void bmi::on_lineEdit_wzrost_editingFinished()                  //zapisywanie danych do zmiennych
{
    wzrost=ui->lineEdit_wzrost->text().toDouble();
}

void bmi::on_lineEdit_waga_editingFinished()
{
    waga=ui->lineEdit_waga->text().toDouble();
}

void bmi::on_lineEdit_plec_editingFinished()
{
    plec=ui->lineEdit_plec->text();
}

void bmi::on_pushButton_clicked()                           //wywołanie funkcji liczącej, porownującej i wyświetlającej
{
    kalkulator(wzrost, waga, plec);
    porownanie(kbmi, BMI1, BMI2, BMI3);
    wyniki(kbmi,sbmi);
}

void bmi::on_pushButton_wroc_clicked()                      //zamykanie okna
{
    close();
}
