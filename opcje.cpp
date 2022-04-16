#include "opcje.h"
#include "ui_opcje.h"


opcje::opcje(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::opcje)
{
    ui->setupUi(this);
}

opcje::~opcje()
{
    delete ui;
}


void opcje::on_pushButton_bmi_clicked()             //otwieranie nowych okien/wchodzenie w klasy
{
    //  bmi wbmi;
    //  wbmi.setModal(true);
    //  wbmi.exec();
    wbmi = new bmi(this);
    wbmi->show();
}

void opcje::on_pushButton_morfologia_clicked()
{

    wmorfologia = new morfologia(this);
    wmorfologia -> show();
}

void opcje::on_pushButton_cholesterol_clicked()
{

    wcholesterol =  new cholesterol(this);
    wcholesterol -> show();
}

void opcje::on_pushButton_bmr_clicked()
{
    wbmr = new bmr(this);
    wbmr -> show();
}

void opcje::on_pushButton_kalkulatorciazy_clicked()
{
    wkalkulatorciazy = new kalkulatorciazy(this);
    wkalkulatorciazy -> show();
}

void opcje::on_pushButton_cisnienietetnicze_clicked()
{
    wcisnienietetnicze = new cisnienietetnicze(this);
    wcisnienietetnicze -> show();
}

void opcje::on_pushButton_bsa_clicked()
{
    wbsa = new bsa(this);
    wbsa -> show();
}

void opcje::on_pushButton_bf_clicked()
{
    wbf = new bf(this);
    wbf -> show();
}

void opcje::on_pushButton_cukrzyca_clicked()
{
    wcukrzyca = new cukrzyca(this);
    wcukrzyca -> show();
}

void opcje::on_pushButton_zamianajednostek_clicked()
{
    wzamianajednostek = new zamianajednostek(this);
    wzamianajednostek -> show();
}

void opcje::on_pushButton_admin_clicked()
{
    zadmin = new admin(this);
    zadmin -> show();
}
