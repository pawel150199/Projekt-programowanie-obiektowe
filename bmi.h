#ifndef BMI_H
#define BMI_H

#include <QDialog>                                                          //dołączanie plików nagłówkowych i bibliotek
#include <QString>
#include <plec.h>
namespace Ui {
class bmi;
}

class bmi : public QDialog, protected Plec                                  //dziedziczenie
{
    Q_OBJECT

public:
    explicit bmi(QWidget *parent = nullptr);
    ~bmi();


private slots:


    void on_lineEdit_wzrost_editingFinished();

    void on_pushButton_clicked();

    void on_lineEdit_waga_editingFinished();

    void on_lineEdit_plec_editingFinished();

    void on_pushButton_wroc_clicked();


private:
    Ui::bmi *ui;
    double wzrost,waga,kbmi,BMI1=18.5,BMI2=25,BMI3=30;                          //zmienne do zapisywania danych oraz obliczeń
    QString sbmi;                                                               //zmienna pomocnicza
    QString plec = this -> Plec::plec;                                          //odniesienie się do obiektu plec w klasie Plec
    double kalkulator(double &wzrost, double &waga, QString &plec);             //funkcja licząca
    QString porownanie(double &kbmi, double &BMI1, double &BMI2, double &BMI3); //funkcją porównująca do zakresu
    virtual void wyniki (double &kbmi, QString &sbmi);                          //wirtualna funkcja wyświetlająca wyniki

};

#endif // BMI_H
