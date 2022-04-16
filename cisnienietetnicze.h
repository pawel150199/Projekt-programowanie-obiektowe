#ifndef CISNIENIETETNICZE_H
#define CISNIENIETETNICZE_H

#include <QDialog>

namespace Ui {
class cisnienietetnicze;
}

class cisnienietetnicze : public QDialog
{
    Q_OBJECT

public:
    explicit cisnienietetnicze(QWidget *parent = nullptr);
    ~cisnienietetnicze();

private slots:
    void on_pushButton_wroc_clicked();

    void on_pushButton_sprawdz_clicked();

    void on_lineEdit_lewa_editingFinished();

    void on_lineEdit_prawa_editingFinished();

private:
    Ui::cisnienietetnicze *ui;
    int lewa,prawa;                         //zmienne do przechowywania danych
    void cisnienie(int &lewa, int &prawa);  //funkcja licząca i wyświetlająca
};

#endif // CISNIENIETETNICZE_H
