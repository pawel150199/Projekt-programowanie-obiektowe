#ifndef MORFOLOGIA_H
#define MORFOLOGIA_H

#include <QDialog>
#include "vector"
#include "wektor.h"

namespace Ui {
class morfologia;
}

class morfologia : public QDialog, protected wektor         //dziedziczenie
{
    Q_OBJECT

public:
    explicit morfologia(QWidget *parent = nullptr);
    ~morfologia();

private slots:
    void on_pushButton_sprawdz_clicked();

    void on_lineEdit_erytrocyty_editingFinished();

    void on_pushButton_wroc_clicked();

    void on_lineEdit_hemoglobina_editingFinished();

    void on_lineEdit_hematokryt_editingFinished();

    void on_lineEdit_mcv_editingFinished();

    void on_lineEdit_mch_editingFinished();

    void on_lineEdit_mchc_editingFinished();

    void on_lineEdit_leukocyty_editingFinished();

    void on_lineEdit_limfocyty_editingFinished();

    void on_lineEdit_monocyty_editingFinished();

    void on_lineEdit_net_editingFinished();

    void on_lineEdit_eos_editingFinished();

    void on_lineEdit_bas_editingFinished();

private:
    Ui::morfologia *ui;
    double erytrocyty,hemoglobina,hematokryt,mcv,mch,mchc,leukocyty,limfocyty,monocyty,net,eos,bas;         //zmienne przechowujące dane
    void porownanie(double &erytrocyty,double &hemoglobina,double &hematokryt,double &mcv,double &mch,double &mchc,double &leukocyty,double &limfocyty,double &monocyty,double &net,double &eos,double &bas, std::vector<std::string>wektorNorm); //funkcja licząca i wyświetlająca

};

#endif // MORFOLOGIA_H
