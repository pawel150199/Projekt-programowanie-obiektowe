#ifndef CUKRZYCA_H
#define CUKRZYCA_H

#include <QDialog>

namespace Ui {
class cukrzyca;
}

class cukrzyca : public QDialog
{
    Q_OBJECT

public:
    explicit cukrzyca(QWidget *parent = nullptr);
    ~cukrzyca();

private slots:
    void on_lineEdit_glukoza_editingFinished();

    void on_pushButton_wroc_clicked();

    void on_pushButton_sprawdz_clicked();

    void on_pushButton_sprawdz_2_clicked();

    void on_lineEdit_insulina_editingFinished();

    void on_lineEdit_homa_glukoza_editingFinished();

    void on_lineEdit_homa_insulina_editingFinished();

    void on_pushButton_sprawdz_3_clicked();

private:
    Ui::cukrzyca *ui;
    double glukoza,insulina,glukozaH,insulinaH,homa,glukozaMIN=70,glukozaMAX=99,glukozaKRYT=125,insulinaMIN=2.6,insulinaMAX=24.9;   //zmienne do przechowywania danych
    void glukozaK(double &glukoza, double &glukozaMIN, double &glukozaMAX, double &glukozaKRYT);                                    //funkcje liczące i wyświetlające
    void insulinaK(double &insulina, double &insulinaMIN, double &insulinaMAX);
    void homaK(double &insulinaH, double &glukozaH);
};

#endif // CUKRZYCA_H
