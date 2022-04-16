#ifndef CHOLESTEROL_H
#define CHOLESTEROL_H

#include <QDialog>                                                      //pliki nagłówkowe i biblioteki
#include "wektor.h"
namespace Ui {
class cholesterol;
}

class cholesterol : public QDialog, protected wektor                    //dziedziczenie
{
    Q_OBJECT

public:
    explicit cholesterol(QWidget *parent = nullptr);
    ~cholesterol();

private slots:
    void on_lineEdit_hdl_editingFinished();

    void on_lineEdit_ldl_editingFinished();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::cholesterol *ui;
    double ldl,hdl;                                                                         //zmienne do przechowywania danych
    void porownanie(double &hdl, double &ldl, std::vector<std::string> wektorNorm);         //funkcją porównująca do wektora norm
};

#endif // CHOLESTEROL_H
