#ifndef BMR_H
#define BMR_H

#include <QDialog>
#include <plec.h>                                                                   //dołączanie plików nagłówkowych i bibliotek
namespace Ui {
class bmr;
}

class bmr : public QDialog, protected Plec                                          //dziedziczenie
{
    Q_OBJECT

public:
    explicit bmr(QWidget *parent = nullptr);
    ~bmr();

private slots:
    void on_lineEdit_wzrost_editingFinished();

    void on_lineEdit_wiek_editingFinished();

    void on_lineEdit_waga_editingFinished();

    void on_lineEdit_plec_editingFinished();

    void on_pushButton_oblicz_clicked();

    void on_pushButton_wroc_clicked();

private:
    Ui::bmr *ui;
    QString plec = this -> Plec::plec;                                              //odniesienie się do obiektu plec w klasie Plec
    double waga,wzrost;                                                             //zmienne do przechowywania danych
    int wiek;
    int kalkulator(double &waga, double &wzrost, int &wiek, QString &plec);         //funkcja licząca
};

#endif // BMR_H
