/********************************************************************************
** Form generated from reading UI file 'kalkulatorciazy.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KALKULATORCIAZY_H
#define UI_KALKULATORCIAZY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_kalkulatorciazy
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_rok;
    QLabel *label_4;
    QLineEdit *lineEdit_miesiac;
    QPushButton *pushButton_sprawdz;
    QLineEdit *lineEdit_dzien;
    QLineEdit *lineEdit_rok;
    QLineEdit *lineEdit_miesiac_2;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton_wroc;
    QLabel *label_6;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *kalkulatorciazy)
    {
        if (kalkulatorciazy->objectName().isEmpty())
            kalkulatorciazy->setObjectName(QString::fromUtf8("kalkulatorciazy"));
        kalkulatorciazy->resize(398, 284);
        gridLayout_2 = new QGridLayout(kalkulatorciazy);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_rok = new QLabel(kalkulatorciazy);
        label_rok->setObjectName(QString::fromUtf8("label_rok"));
        QFont font;
        font.setPointSize(10);
        label_rok->setFont(font);

        gridLayout->addWidget(label_rok, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(kalkulatorciazy);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_miesiac = new QLineEdit(kalkulatorciazy);
        lineEdit_miesiac->setObjectName(QString::fromUtf8("lineEdit_miesiac"));
        lineEdit_miesiac->setMinimumSize(QSize(100, 0));
        lineEdit_miesiac->setMaximumSize(QSize(500, 16777215));
        lineEdit_miesiac->setFont(font);

        gridLayout->addWidget(lineEdit_miesiac, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_sprawdz = new QPushButton(kalkulatorciazy);
        pushButton_sprawdz->setObjectName(QString::fromUtf8("pushButton_sprawdz"));
        pushButton_sprawdz->setFont(font);

        gridLayout->addWidget(pushButton_sprawdz, 6, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_dzien = new QLineEdit(kalkulatorciazy);
        lineEdit_dzien->setObjectName(QString::fromUtf8("lineEdit_dzien"));
        lineEdit_dzien->setMinimumSize(QSize(100, 0));
        lineEdit_dzien->setMaximumSize(QSize(500, 16777215));
        lineEdit_dzien->setFont(font);

        gridLayout->addWidget(lineEdit_dzien, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_rok = new QLineEdit(kalkulatorciazy);
        lineEdit_rok->setObjectName(QString::fromUtf8("lineEdit_rok"));
        lineEdit_rok->setMinimumSize(QSize(100, 0));
        lineEdit_rok->setMaximumSize(QSize(500, 16777215));
        lineEdit_rok->setFont(font);

        gridLayout->addWidget(lineEdit_rok, 4, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_miesiac_2 = new QLineEdit(kalkulatorciazy);
        lineEdit_miesiac_2->setObjectName(QString::fromUtf8("lineEdit_miesiac_2"));
        lineEdit_miesiac_2->setMinimumSize(QSize(100, 0));
        lineEdit_miesiac_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_miesiac_2->setFont(font);

        gridLayout->addWidget(lineEdit_miesiac_2, 5, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(kalkulatorciazy);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(kalkulatorciazy);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_wroc = new QPushButton(kalkulatorciazy);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        pushButton_wroc->setFont(font);

        gridLayout->addWidget(pushButton_wroc, 6, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_6 = new QLabel(kalkulatorciazy);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        plainTextEdit = new QPlainTextEdit(kalkulatorciazy);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 50));
        plainTextEdit->setFont(font);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 2, Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(kalkulatorciazy);

        QMetaObject::connectSlotsByName(kalkulatorciazy);
    } // setupUi

    void retranslateUi(QDialog *kalkulatorciazy)
    {
        kalkulatorciazy->setWindowTitle(QCoreApplication::translate("kalkulatorciazy", "Kalkulator ci\304\205\305\274y", nullptr));
        label_rok->setText(QCoreApplication::translate("kalkulatorciazy", "Podaj rok:", nullptr));
        label_4->setText(QCoreApplication::translate("kalkulatorciazy", "Podaj miesi\304\205c:", nullptr));
        pushButton_sprawdz->setText(QCoreApplication::translate("kalkulatorciazy", "Sprawd\305\272", nullptr));
        label_3->setText(QCoreApplication::translate("kalkulatorciazy", "Podaj dzie\305\204:", nullptr));
        label->setText(QCoreApplication::translate("kalkulatorciazy", "Kalkulator ci\304\205\305\274y", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("kalkulatorciazy", "Wr\303\263\304\207", nullptr));
        label_6->setText(QCoreApplication::translate("kalkulatorciazy", "Miesi\304\205c porodu:", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("kalkulatorciazy", "Kalkulator ci\304\205\305\274y pomaga oszacowa\304\207 termin porodu i wiek ci\304\205\305\274y, obliczany od chwili wyst\304\205pienia ostatniej miesi\304\205czki.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kalkulatorciazy: public Ui_kalkulatorciazy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KALKULATORCIAZY_H
