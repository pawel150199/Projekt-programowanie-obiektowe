#include "cukrzyca.h"
#include "ui_cukrzyca.h"

cukrzyca::cukrzyca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cukrzyca)
{
    ui->setupUi(this);
}

cukrzyca::~cukrzyca()
{
    delete ui;
}

void cukrzyca::glukozaK(double &glukoza, double &glukozaMIN, double &glukozaMAX, double &glukozaKRYT)       //funkcja porównująca
{
    if(glukoza<glukozaMIN)                                                                                  //porówanie
    {
        ui->lineEdit_glukoza_2->setText("za niski");                                                        //wyświetlenie
    }
    else if(glukoza>=glukozaMIN&&glukoza<=glukozaMAX)
    {
        ui->lineEdit_glukoza_2->setText("prawidłowy");
    }
    else if(glukoza>glukozaMAX&&glukoza<glukozaKRYT)
    {
        ui->lineEdit_glukoza_2->setText("podwyższony");
    }
    else if (glukoza>=glukozaKRYT)
    {
        ui->lineEdit_glukoza_2->setText("cukrzyca");
    }

    else ui->lineEdit_glukoza_2->setText("Błąd");                                                           //zabezpieczenie funkcji

}

void cukrzyca::insulinaK(double &insulina,double &insulinaMIN,double &insulinaMAX)
{
    if(insulina<insulinaMIN)
    {
        ui->lineEdit_insulina_2->setText("za niski");
    }
    else if(insulina>=insulinaMIN&&insulina<=insulinaMAX)
    {
        ui->lineEdit_insulina_2->setText("prawidłowy");
    }
    else if(insulina>insulinaMAX)
    {
        ui->lineEdit_insulina_2->setText("podwyższony");
    }
    else ui->lineEdit_insulina_2->setText("Błąd");
}

void cukrzyca::homaK(double &insulinaH, double &glukozaH)                                                   //funkcja licząca
{
    double R;
    R = ((insulinaH*(glukozaH*0.0566))/22.5);
    ui->lineEdit_homa->setText(QString::number(R));
    if (R>2)
    {
        ui->lineEdit_homa_2->setText("insulinoodporność");
    }
    else ui->lineEdit_homa_2->setText("w normie");
}


void cukrzyca::on_lineEdit_glukoza_editingFinished()                                                        //zapis danych do zmiennych
{
    glukoza=ui->lineEdit_glukoza->text().toDouble();
}

void cukrzyca::on_lineEdit_insulina_editingFinished()
{
    insulina=ui->lineEdit_insulina->text().toDouble();
}

void cukrzyca::on_lineEdit_homa_glukoza_editingFinished()
{
    glukozaH=ui->lineEdit_homa_glukoza->text().toDouble();
}

void cukrzyca::on_lineEdit_homa_insulina_editingFinished()
{
    insulinaH=ui->lineEdit_homa_insulina->text().toDouble();
}

void cukrzyca::on_pushButton_sprawdz_clicked()                                                              //wywołanie funkcji
{
    glukozaK(glukoza,glukozaMIN,glukozaMAX,glukozaKRYT);
    ui->lineEdit_glukozamin->setText(QString::number(glukozaMIN));
    ui->lineEdit_glukozamax->setText(QString::number(glukozaMAX));
    ui->lineEdit_glukozakryt->setText(QString::number(glukozaKRYT));
}

void cukrzyca::on_pushButton_sprawdz_2_clicked()
{

    insulinaK(insulina,insulinaMIN,insulinaMAX);
    ui->lineEdit_insulinamin->setText(QString::number(insulinaMIN));
    ui->lineEdit_insulinamax->setText(QString::number(insulinaMAX));
}

void cukrzyca::on_pushButton_sprawdz_3_clicked()
{
    homaK(insulinaH,glukozaH);

}

void cukrzyca::on_pushButton_wroc_clicked()                                                                 //zamknięcie okna
{
    close();
}
