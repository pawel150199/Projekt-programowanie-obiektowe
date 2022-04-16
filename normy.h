#ifndef NORMY_H
#define NORMY_H

#include <QDialog>

namespace Ui {
class normy;
}

class normy : public QDialog
{
    Q_OBJECT

public:
    explicit normy(QWidget *parent = nullptr);
    ~normy();

private slots:
    void on_pushButton_otworz_clicked();

    void on_pushButton_wroc_clicked();

    void on_pushButton_zapisz_clicked();

private:
    Ui::normy *ui;
};
#endif // NORMY_H
