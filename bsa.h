#ifndef BSA_H
#define BSA_H

#include <QDialog>

namespace Ui {
class bsa;
}

class bsa : public QDialog
{
    Q_OBJECT

public:
    explicit bsa(QWidget *parent = nullptr);
    ~bsa();

private slots:
    void on_lineEdit_waga_editingFinished();

    void on_lineEdit_wzrost_editingFinished();

    void on_pushButton_oblicz_clicked();

    void on_pushButton_wroc_clicked();

private:
    Ui::bsa *ui;
    double waga,wzrost,absa;                            //zmienne do przechowywania danych
    void kalkulator(double &wzrost, double &waga);      //funkcja licząca
    void wyniki(double &absa);                          //wirtualna funkcja wyświetlająca wyniki
};

#endif // BSA_H
