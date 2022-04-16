#ifndef OPCJE_H
#define OPCJE_H

#include <QMainWindow>                  //załączenie wymaganych plików nagłówkowych
#include "bmi.h"
#include "morfologia.h"
#include "bf.h"
#include "bmr.h"
#include "bsa.h"
#include "cholesterol.h"
#include "cisnienietetnicze.h"
#include "cukrzyca.h"
#include "kalkulatorciazy.h"
#include "zamianajednostek.h"
#include "admin.h"


QT_BEGIN_NAMESPACE
namespace Ui { class opcje; }
QT_END_NAMESPACE

class opcje : public QMainWindow
{
    Q_OBJECT

public:
    opcje(QWidget *parent = nullptr);
    ~opcje();
protected:

private slots:


    void on_pushButton_bmi_clicked();

    void on_pushButton_morfologia_clicked();

    void on_pushButton_cholesterol_clicked();

    void on_pushButton_bmr_clicked();

    void on_pushButton_kalkulatorciazy_clicked();

    void on_pushButton_cisnienietetnicze_clicked();

    void on_pushButton_bsa_clicked();

    void on_pushButton_bf_clicked();

    void on_pushButton_cukrzyca_clicked();

    void on_pushButton_zamianajednostek_clicked();

    void on_pushButton_admin_clicked();

private:
    Ui::opcje *ui;
    bmi *wbmi;                                      //wskazniki
    morfologia *wmorfologia;
    bf *wbf;
    bmr *wbmr;
    bsa *wbsa;
    cholesterol *wcholesterol;
    cisnienietetnicze *wcisnienietetnicze;
    cukrzyca *wcukrzyca;
    kalkulatorciazy *wkalkulatorciazy;
    zamianajednostek *wzamianajednostek;
    Plec *wplec;
    admin *zadmin;

};
#endif // OPCJE_H
