#include "morfologia.h"
#include "ui_morfologia.h"
#include <vector>

morfologia::morfologia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::morfologia)
{
    ui->setupUi(this);
}

morfologia::~morfologia()
{
    delete ui;
}

void morfologia::on_pushButton_sprawdz_clicked()
{
    advektor();                                                                                                     //uzupełnienie wektora
    porownanie(erytrocyty,hemoglobina,hematokryt,mcv,mch,mchc,leukocyty,limfocyty,monocyty,net,eos,bas,wektorNorm); //wywołanie funkcji porównującej

}

void morfologia::porownanie(double &erytrocyty, double &hemoglobina, double &hematokryt, double &mcv, double &mch, double &mchc, double &leukocyty, double &limfocyty, double &monocyty, double &net, double &eos, double &bas, std::vector<std::string> wektorNorm)
{
    std::string emin=wektorNorm[0];                             //wywołanie elementów wektora do zmiennych pomocniczych
    std::string emax=wektorNorm[1];
    std::string::size_type sz;
    double pmin,pmax;
    pmin=std::stod (emin,&sz);                                  //konwersja string na double
    pmax=std::stod (emax,&sz);
    if (erytrocyty >= pmin && erytrocyty <= pmax)               //porówannie
        ui->lineEdit_stan->setText("W normie");                 //wyświetlenie stanu
    else
        ui->lineEdit_stan->setText("Nie w normie");
    ui->lineEdit_min->setText(QString::number(pmin));           //wyświetlenie norm
    ui->lineEdit_max->setText(QString::number(pmax));

    std::string hmin=wektorNorm[2];
    std::string hmax=wektorNorm[3];
    pmin=std::stod (hmin,&sz);
    pmax=std::stod (hmax,&sz);
    if (hemoglobina >= pmin && hemoglobina <= pmax)
        ui->lineEdit_stan_2->setText("W normie");
    else
        ui->lineEdit_stan_2->setText("Poza normą");
    ui->lineEdit_min_2->setText(QString::number(pmin));
    ui->lineEdit_max_2->setText(QString::number(pmax));

    std::string hemin=wektorNorm[4];
    std::string hemax=wektorNorm[5];
    pmin=std::stod (hemin,&sz);
    pmax=std::stod (hemax,&sz);
    if (hematokryt >= pmin && hematokryt <= pmax)
        ui->lineEdit_stan_3->setText("W normie");
    else
        ui->lineEdit_stan_3->setText("Poza normą");
    ui->lineEdit_min_3->setText(QString::number(pmin));
    ui->lineEdit_max_3->setText(QString::number(pmax));

    std::string mcvmin=wektorNorm[6];
    std::string mcvmax=wektorNorm[7];
    pmin=std::stod (mcvmin,&sz);
    pmax=std::stod (mcvmax,&sz);
    if (mcv >= pmin && mcv <= pmax)
        ui->lineEdit_stan_4->setText("W normie");
    else
        ui->lineEdit_stan_4->setText("Poza normą");
    ui->lineEdit_min_4->setText(QString::number(pmin));
    ui->lineEdit_max_4->setText(QString::number(pmax));

    std::string mchmin=wektorNorm[8];
    std::string mchmax=wektorNorm[9];
    pmin=std::stod (mchmin,&sz);
    pmax=std::stod (mchmax,&sz);
    if (mch >= pmin && mch <= pmax)
        ui->lineEdit_stan_5->setText("W normie");
    else
        ui->lineEdit_stan_5->setText("Poza normą");
    ui->lineEdit_min_5->setText(QString::number(pmin));
    ui->lineEdit_max_5->setText(QString::number(pmax));

    std::string mchcmin=wektorNorm[10];
    std::string mchcmax=wektorNorm[11];
    pmin=std::stod (mchcmin,&sz);
    pmax=std::stod (mchcmax,&sz);
    if (mchc >= pmin && mchc <= pmax)
        ui->lineEdit_stan_6->setText("W normie");
    else
        ui->lineEdit_stan_6->setText("Poza normą");
    ui->lineEdit_min_6->setText(QString::number(pmin));
    ui->lineEdit_max_6->setText(QString::number(pmax));

    std::string leumin=wektorNorm[12];
    std::string leumax=wektorNorm[13];
    pmin=std::stod (leumin,&sz);
    pmax=std::stod (leumax,&sz);
    if (leukocyty >= pmin && leukocyty <= pmax)
        ui->lineEdit_stan_7->setText("W normie");
    else
        ui->lineEdit_stan_7->setText("Poza normą");
    ui->lineEdit_min_7->setText(QString::number(pmin));
    ui->lineEdit_max_7->setText(QString::number(pmax));

    std::string limmin=wektorNorm[14];
    std::string limmax=wektorNorm[15];
    pmin=std::stod (limmin,&sz);
    pmax=std::stod (limmax,&sz);
    if (limfocyty >= pmin && limfocyty <= pmax)
        ui->lineEdit_stan_8->setText("W normie");
    else
        ui->lineEdit_stan_8->setText("Poza normą");
    ui->lineEdit_min_8->setText(QString::number(pmin));
    ui->lineEdit_max_8->setText(QString::number(pmax));

    std::string monmin=wektorNorm[16];
    std::string monmax=wektorNorm[17];
    pmin=std::stod (monmin,&sz);
    pmax=std::stod (monmax,&sz);
    if (monocyty >= pmin && monocyty <= pmax)
        ui->lineEdit_stan_9->setText("W normie");
    else
        ui->lineEdit_stan_9->setText("Poza normą");
    ui->lineEdit_min_9->setText(QString::number(pmin));
    ui->lineEdit_max_9->setText(QString::number(pmax));

    std::string netmin=wektorNorm[18];
    std::string netmax=wektorNorm[19];
    pmin=std::stod (netmin,&sz);
    pmax=std::stod (netmax,&sz);
    if (net >= pmin && net <= pmax)
        ui->lineEdit_stan_10->setText("W normie");
    else
        ui->lineEdit_stan_10->setText("Poza normą");
    ui->lineEdit_min_10->setText(QString::number(pmin));
    ui->lineEdit_max_10->setText(QString::number(pmax));

    std::string eosmin=wektorNorm[20];
    std::string eosmax=wektorNorm[21];
    pmin=std::stod (eosmin,&sz);
    pmax=std::stod (eosmax,&sz);
    if ( eos>= pmin && eos <= pmax)
        ui->lineEdit_stan_11->setText("W normie");
    else
        ui->lineEdit_stan_11->setText("Poza normą");
    ui->lineEdit_min_11->setText(QString::number(pmin));
    ui->lineEdit_max_11->setText(QString::number(pmax));

    std::string basmin=wektorNorm[22];
    std::string basmax=wektorNorm[23];
    pmin=std::stod (basmin,&sz);
    pmax=std::stod (basmax,&sz);
    if ( bas>= pmin && bas <= pmax)
        ui->lineEdit_stan_12->setText("W normie");
    else
        ui->lineEdit_stan_12->setText("Poza normą");
    ui->lineEdit_min_12->setText(QString::number(pmin));
    ui->lineEdit_max_12->setText(QString::number(pmax));
}

void morfologia::on_lineEdit_erytrocyty_editingFinished()                   //zapis danych do zmiennych
{
    erytrocyty = ui->lineEdit_erytrocyty->text().toDouble();
}

void morfologia::on_lineEdit_hemoglobina_editingFinished()
{
    hemoglobina=ui->lineEdit_hemoglobina->text().toDouble();
}

void morfologia::on_lineEdit_hematokryt_editingFinished()
{
    hematokryt =ui->lineEdit_hematokryt->text().toDouble();
}

void morfologia::on_lineEdit_mcv_editingFinished()
{
    mcv=ui->lineEdit_mcv->text().toDouble();
}

void morfologia::on_lineEdit_mch_editingFinished()
{
    mch=ui->lineEdit_mch->text().toDouble();
}

void morfologia::on_lineEdit_mchc_editingFinished()
{
    mchc=ui->lineEdit_mchc->text().toDouble();
}

void morfologia::on_lineEdit_leukocyty_editingFinished()
{
    leukocyty=ui->lineEdit_leukocyty->text().toDouble();
}

void morfologia::on_lineEdit_limfocyty_editingFinished()
{
    limfocyty=ui->lineEdit_limfocyty->text().toDouble();
}

void morfologia::on_lineEdit_monocyty_editingFinished()
{
    monocyty=ui->lineEdit_monocyty->text().toDouble();
}

void morfologia::on_lineEdit_net_editingFinished()
{
    net=ui->lineEdit_net->text().toDouble();
}

void morfologia::on_lineEdit_eos_editingFinished()
{
    eos=ui->lineEdit_eos->text().toDouble();
}

void morfologia::on_lineEdit_bas_editingFinished()
{
    bas=ui->lineEdit_bas->text().toDouble();
}

void morfologia::on_pushButton_wroc_clicked()                           //zamknięcie okna
{
    close();
}
