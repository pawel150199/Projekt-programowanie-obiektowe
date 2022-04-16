/********************************************************************************
** Form generated from reading UI file 'bf.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BF_H
#define UI_BF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bf
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_plec;
    QLineEdit *lineEdit_waga;
    QLabel *label_8;
    QLineEdit *lineEdit_wzrost;
    QLabel *label_7;
    QLineEdit *lineEdit_bf;
    QPushButton *pushButton_oblicz;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *lineEdit_bf_3;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *lineEdit_bf_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *bf)
    {
        if (bf->objectName().isEmpty())
            bf->setObjectName(QString::fromUtf8("bf"));
        bf->resize(649, 497);
        gridLayout_2 = new QGridLayout(bf);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(bf);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(bf);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_plec = new QLineEdit(bf);
        lineEdit_plec->setObjectName(QString::fromUtf8("lineEdit_plec"));
        lineEdit_plec->setMinimumSize(QSize(200, 0));
        lineEdit_plec->setMaximumSize(QSize(500, 16777215));
        lineEdit_plec->setFont(font1);

        gridLayout->addWidget(lineEdit_plec, 4, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_waga = new QLineEdit(bf);
        lineEdit_waga->setObjectName(QString::fromUtf8("lineEdit_waga"));
        lineEdit_waga->setMinimumSize(QSize(200, 0));
        lineEdit_waga->setMaximumSize(QSize(500, 16777215));
        lineEdit_waga->setFont(font1);

        gridLayout->addWidget(lineEdit_waga, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_8 = new QLabel(bf);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 7, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_wzrost = new QLineEdit(bf);
        lineEdit_wzrost->setObjectName(QString::fromUtf8("lineEdit_wzrost"));
        lineEdit_wzrost->setMinimumSize(QSize(200, 0));
        lineEdit_wzrost->setMaximumSize(QSize(500, 16777215));
        lineEdit_wzrost->setFont(font1);

        gridLayout->addWidget(lineEdit_wzrost, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_7 = new QLabel(bf);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        gridLayout->addWidget(label_7, 8, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_bf = new QLineEdit(bf);
        lineEdit_bf->setObjectName(QString::fromUtf8("lineEdit_bf"));
        lineEdit_bf->setMinimumSize(QSize(200, 0));
        lineEdit_bf->setMaximumSize(QSize(500, 16777215));
        lineEdit_bf->setFont(font1);
        lineEdit_bf->setReadOnly(true);

        gridLayout->addWidget(lineEdit_bf, 5, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_oblicz = new QPushButton(bf);
        pushButton_oblicz->setObjectName(QString::fromUtf8("pushButton_oblicz"));
        pushButton_oblicz->setFont(font1);

        gridLayout->addWidget(pushButton_oblicz, 9, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(bf);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 9, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_6 = new QLabel(bf);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 5, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_bf_3 = new QLineEdit(bf);
        lineEdit_bf_3->setObjectName(QString::fromUtf8("lineEdit_bf_3"));
        lineEdit_bf_3->setMinimumSize(QSize(200, 0));
        lineEdit_bf_3->setMaximumSize(QSize(500, 16777215));
        lineEdit_bf_3->setFont(font1);
        lineEdit_bf_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_bf_3, 8, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(bf);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(bf);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_bf_2 = new QLineEdit(bf);
        lineEdit_bf_2->setObjectName(QString::fromUtf8("lineEdit_bf_2"));
        lineEdit_bf_2->setMinimumSize(QSize(200, 0));
        lineEdit_bf_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_bf_2->setFont(font1);
        lineEdit_bf_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_bf_2, 7, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        plainTextEdit = new QPlainTextEdit(bf);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 125));
        plainTextEdit->setFont(font1);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(bf);

        QMetaObject::connectSlotsByName(bf);
    } // setupUi

    void retranslateUi(QDialog *bf)
    {
        bf->setWindowTitle(QCoreApplication::translate("bf", "Procent tkanki t\305\202uszczowej", nullptr));
        label->setText(QCoreApplication::translate("bf", "Procent tkanki t\305\202uszczowej", nullptr));
        label_3->setText(QCoreApplication::translate("bf", "Waga [kg]:", nullptr));
        label_8->setText(QCoreApplication::translate("bf", "Masa ca\305\202kowita t\305\202uszczu [kg]:", nullptr));
        label_7->setText(QCoreApplication::translate("bf", "Procentowy stosunek t\305\202uszczu do ca\305\202ej masy cia\305\202a [%]:", nullptr));
        pushButton_oblicz->setText(QCoreApplication::translate("bf", "Oblicz", nullptr));
        pushButton->setText(QCoreApplication::translate("bf", "Wr\303\263\304\207", nullptr));
        label_6->setText(QCoreApplication::translate("bf", "Masa cia\305\202a bez t\305\202uszczu [kg]:", nullptr));
        label_5->setText(QCoreApplication::translate("bf", "P\305\202e\304\207:", nullptr));
        label_4->setText(QCoreApplication::translate("bf", "Wzrost [cm]:", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("bf", "Procent tkanki t\305\202uszczowej jest miar\304\205 poziomu sprawno\305\233ci fizycznej , poniewa\305\274 jest to jedyny pomiar cia\305\202a, kt\303\263ry bezpo\305\233rednio oblicza wzgl\304\231dny sk\305\202ad cia\305\202a osoby bez wzgl\304\231du na wzrost i wag\304\231. Szeroko stosowany wska\305\272nik masy cia\305\202a (BMI) zapewnia miar\304\231, kt\303\263ra pozwala na por\303\263wnanie oty\305\202o\305\233ci os\303\263b o r\303\263\305\274nych wysoko\305\233ciach i masach. Podczas gdy BMI znacznie wzrasta wraz ze wzrostem oty\305\202o\305\233ci, z powodu r\303\263\305\274nic w sk\305\202adzie cia\305\202a, inne wska\305\272niki tkanki t\305\202uszczowej daj\304\205 dok\305\202adniejsze wyniki; na przyk\305\202ad osoby o wi\304\231kszej masie mi\304\231\305\233niowej lub wi\304\231kszych ko\305\233ciach b\304\231d\304\205 mia\305\202y wy\305\274sze BMI. Jako taki BMI jest u\305\274ytecznym wska\305\272nikiem og\303\263lnej sprawno\305\233ci dla du\305\274ej grupy os\303\263b, ale s\305\202abym narz\304"
                        "\231dziem do okre\305\233lania stanu zdrowia danej osoby.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bf: public Ui_bf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BF_H
