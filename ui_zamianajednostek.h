/********************************************************************************
** Form generated from reading UI file 'zamianajednostek.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZAMIANAJEDNOSTEK_H
#define UI_ZAMIANAJEDNOSTEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_zamianajednostek
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_wroc;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton_wyzeruj;
    QLabel *label_4;
    QPushButton *pushButton_oblicz;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_1;

    void setupUi(QDialog *zamianajednostek)
    {
        if (zamianajednostek->objectName().isEmpty())
            zamianajednostek->setObjectName(QString::fromUtf8("zamianajednostek"));
        zamianajednostek->resize(400, 300);
        gridLayout_2 = new QGridLayout(zamianajednostek);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_wroc = new QPushButton(zamianajednostek);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        QFont font;
        font.setPointSize(10);
        pushButton_wroc->setFont(font);

        gridLayout->addWidget(pushButton_wroc, 4, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(zamianajednostek);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(zamianajednostek);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(zamianajednostek);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 1, 1, 3, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_wyzeruj = new QPushButton(zamianajednostek);
        pushButton_wyzeruj->setObjectName(QString::fromUtf8("pushButton_wyzeruj"));
        pushButton_wyzeruj->setFont(font);

        gridLayout->addWidget(pushButton_wyzeruj, 4, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(zamianajednostek);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_oblicz = new QPushButton(zamianajednostek);
        pushButton_oblicz->setObjectName(QString::fromUtf8("pushButton_oblicz"));
        pushButton_oblicz->setFont(font);

        gridLayout->addWidget(pushButton_oblicz, 4, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_3 = new QLineEdit(zamianajednostek);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(100, 0));
        lineEdit_3->setMaximumSize(QSize(500, 16777215));
        lineEdit_3->setFont(font);

        gridLayout->addWidget(lineEdit_3, 3, 2, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_2 = new QLineEdit(zamianajednostek);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(100, 0));
        lineEdit_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_2->setFont(font);

        gridLayout->addWidget(lineEdit_2, 2, 2, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_1 = new QLineEdit(zamianajednostek);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setMinimumSize(QSize(100, 0));
        lineEdit_1->setMaximumSize(QSize(500, 16777215));
        lineEdit_1->setFont(font);

        gridLayout->addWidget(lineEdit_1, 1, 2, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(zamianajednostek);

        QMetaObject::connectSlotsByName(zamianajednostek);
    } // setupUi

    void retranslateUi(QDialog *zamianajednostek)
    {
        zamianajednostek->setWindowTitle(QCoreApplication::translate("zamianajednostek", "Zamiana jednostek", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("zamianajednostek", "Wr\303\263\304\207", nullptr));
        label_5->setText(QCoreApplication::translate("zamianajednostek", "mg/dl", nullptr));
        label_3->setText(QCoreApplication::translate("zamianajednostek", "g/dl", nullptr));
        label->setText(QCoreApplication::translate("zamianajednostek", "Zamiana jednostek", nullptr));
        pushButton_wyzeruj->setText(QCoreApplication::translate("zamianajednostek", "Wyzeruj", nullptr));
        label_4->setText(QCoreApplication::translate("zamianajednostek", "mmol/l", nullptr));
        pushButton_oblicz->setText(QCoreApplication::translate("zamianajednostek", "Oblicz", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_2->setText(QString());
        lineEdit_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zamianajednostek: public Ui_zamianajednostek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZAMIANAJEDNOSTEK_H
