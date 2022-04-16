#ifndef BF_H
#define BF_H

#include <QDialog>
#include <plec.h>                                                  //zalączanie pliku nagłówkowego
namespace Ui {
class bf;
}

class bf : public QDialog, protected Plec                          //dziedizczenie po Plci
{
    Q_OBJECT

public:
    explicit bf(QWidget *parent = nullptr);
    ~bf();

private slots:
    void on_lineEdit_waga_editingFinished();

    void on_lineEdit_wzrost_editingFinished();

    void on_lineEdit_plec_editingFinished();

    void on_pushButton_clicked();

    void on_pushButton_oblicz_clicked();

private:
    Ui::bf *ui;
    QString plec = this -> Plec::plec;                              //odniesienie się do obiektu plec w klasie Plec
    double waga,wzrost,abf,bbf,cbf;                                 //tworzenie zmiennych, do których będą zapisywane dane z ekranu wpisywania oraz zmienne pomocnicze do obliczeń
    void kalkulator(double &waga, double &wzrost,  QString &plec);  //funkcja licząca
    virtual void wyniki(double &abf);                               //virtualna funckja wyświetlająca wyniki
};

#endif // BF_H
