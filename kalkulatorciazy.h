#ifndef KALKULATORCIAZY_H
#define KALKULATORCIAZY_H

#include <QDialog>

namespace Ui {
class kalkulatorciazy;
}

class kalkulatorciazy : public QDialog
{
    Q_OBJECT

public:
    explicit kalkulatorciazy(QWidget *parent = nullptr);
    ~kalkulatorciazy();

private slots:
    void on_lineEdit_dzien_editingFinished();

    void on_lineEdit_miesiac_editingFinished();

    void on_pushButton_wroc_clicked();

    void on_pushButton_sprawdz_clicked();

    void on_lineEdit_rok_editingFinished();

private:
    Ui::kalkulatorciazy *ui;
    int dzien,miesiac,rok;                                      //zmienne do przechowywania danych
    void kalkulator(int &rok,int &miesiac,int &dzien);          //funkcja licząca
    void wyniki(int &rok,int &miesiac,int &dzien);              //funkcja wyświetlająca
};

#endif // KALKULATORCIAZY_H
