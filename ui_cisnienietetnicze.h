/********************************************************************************
** Form generated from reading UI file 'cisnienietetnicze.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CISNIENIETETNICZE_H
#define UI_CISNIENIETETNICZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_cisnienietetnicze
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_lewa;
    QPushButton *pushButton_wroc;
    QLineEdit *lineEdit_prawa;
    QLineEdit *lineEdit_cisnienie;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton_sprawdz;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *cisnienietetnicze)
    {
        if (cisnienietetnicze->objectName().isEmpty())
            cisnienietetnicze->setObjectName(QString::fromUtf8("cisnienietetnicze"));
        cisnienietetnicze->resize(423, 272);
        gridLayout_2 = new QGridLayout(cisnienietetnicze);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_lewa = new QLineEdit(cisnienietetnicze);
        lineEdit_lewa->setObjectName(QString::fromUtf8("lineEdit_lewa"));
        lineEdit_lewa->setMinimumSize(QSize(100, 0));
        lineEdit_lewa->setMaximumSize(QSize(500, 16777215));
        QFont font;
        font.setPointSize(10);
        lineEdit_lewa->setFont(font);

        gridLayout->addWidget(lineEdit_lewa, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_wroc = new QPushButton(cisnienietetnicze);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        pushButton_wroc->setFont(font);

        gridLayout->addWidget(pushButton_wroc, 4, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_prawa = new QLineEdit(cisnienietetnicze);
        lineEdit_prawa->setObjectName(QString::fromUtf8("lineEdit_prawa"));
        lineEdit_prawa->setMinimumSize(QSize(100, 0));
        lineEdit_prawa->setMaximumSize(QSize(500, 16777215));
        lineEdit_prawa->setFont(font);

        gridLayout->addWidget(lineEdit_prawa, 2, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_cisnienie = new QLineEdit(cisnienietetnicze);
        lineEdit_cisnienie->setObjectName(QString::fromUtf8("lineEdit_cisnienie"));
        lineEdit_cisnienie->setMinimumSize(QSize(100, 0));
        lineEdit_cisnienie->setMaximumSize(QSize(500, 16777215));
        lineEdit_cisnienie->setFont(font);
        lineEdit_cisnienie->setReadOnly(true);

        gridLayout->addWidget(lineEdit_cisnienie, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(cisnienietetnicze);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 4, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(cisnienietetnicze);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(cisnienietetnicze);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_sprawdz = new QPushButton(cisnienietetnicze);
        pushButton_sprawdz->setObjectName(QString::fromUtf8("pushButton_sprawdz"));
        pushButton_sprawdz->setFont(font);

        gridLayout->addWidget(pushButton_sprawdz, 4, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(cisnienietetnicze);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        plainTextEdit = new QPlainTextEdit(cisnienietetnicze);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 80));
        plainTextEdit->setFont(font);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 4, Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(cisnienietetnicze);

        QMetaObject::connectSlotsByName(cisnienietetnicze);
    } // setupUi

    void retranslateUi(QDialog *cisnienietetnicze)
    {
        cisnienietetnicze->setWindowTitle(QCoreApplication::translate("cisnienietetnicze", "Ci\305\233nienie t\304\231tnicze", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("cisnienietetnicze", "Wr\303\263\304\207", nullptr));
        label->setText(QCoreApplication::translate("cisnienietetnicze", "Ci\305\233nienie t\304\231tnicze", nullptr));
        label_3->setText(QCoreApplication::translate("cisnienietetnicze", "Podaj ci\305\233nienie:", nullptr));
        label_5->setText(QCoreApplication::translate("cisnienietetnicze", "Twoje ci\305\233nienie jest:", nullptr));
        pushButton_sprawdz->setText(QCoreApplication::translate("cisnienietetnicze", "Sprawd\305\272", nullptr));
        label_4->setText(QCoreApplication::translate("cisnienietetnicze", "/", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("cisnienietetnicze", "Ci\305\233nienie t\304\231tnicze \342\200\223 ci\305\233nienie wywierane przez krew na \305\233cianki t\304\231tnic, przy czym pod t\304\205 nazw\304\205 rozumie si\304\231 ci\305\233nienie w najwi\304\231kszych t\304\231tnicach, np. w t\304\231tnicy w ramieniu. Jest ono wy\305\274sze ni\305\274 ci\305\233nienie krwi wywierane na \305\233cianki \305\274y\305\202.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cisnienietetnicze: public Ui_cisnienietetnicze {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CISNIENIETETNICZE_H
