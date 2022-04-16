#ifndef ZAMIANAJEDNOSTEK_H
#define ZAMIANAJEDNOSTEK_H

#include <QDialog>

namespace Ui {
class zamianajednostek;
}

class zamianajednostek : public QDialog
{
    Q_OBJECT

public:
    explicit zamianajednostek(QWidget *parent = nullptr);
    ~zamianajednostek();

private slots:
    void on_pushButton_wroc_clicked();

    void on_pushButton_oblicz_clicked();

    void on_lineEdit_1_editingFinished();

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();


    void on_pushButton_wyzeruj_clicked();

private:
    Ui::zamianajednostek *ui;
    double a=0,b=0,c=0;                                         //zmienne przechowujące dane
    void kalkulator(double &a,double &b,double &c);             //funkcja licząca
    void wyniki(double &a, double &b, double &c);               //funkcja wyświetlająca
};

#endif // ZAMIANAJEDNOSTEK_H
