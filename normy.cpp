#include "normy.h"
#include "ui_normy.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

normy::normy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::normy)
{
    ui->setupUi(this);
}

normy::~normy()
{
    delete ui;
}

void normy::on_pushButton_otworz_clicked()                                                  //zarządzanie plikami tekstowymi
{

    QFile normy("normy.txt");                                                               //otwieranie pliku
        //wyświetlanie tekstu
    if(!normy.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::information(0,"Informacja",normy.errorString());
    }

    QTextStream in(&normy);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    normy.close();

    QFile normy1("normy1.txt");                                                              //otwieranie pliku
        //wyświetlanie tekstu
    if(!normy1.open(QIODevice::ReadOnly | QFile::Text))
    {
        QMessageBox::information(0,"Informacja",normy1.errorString());
    }

    QTextStream w(&normy1);
    QString tekst = w.readAll();
    ui->plainTextEdit_2->setPlainText(tekst);
    normy.close();

}

void normy::on_pushButton_zapisz_clicked()
{
    QFile normy("normy.txt");                                                               //zapisywanie tekstu do pliku

    if(!normy.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::information(0,"Informacja",normy.errorString());
    }

    QTextStream out(&normy);
    QString text = ui->plainTextEdit->toPlainText();
    out << text;
    normy.flush();
    normy.close();
}

void normy::on_pushButton_wroc_clicked()
{
    close();                                                                                //zamykanie okna
}
