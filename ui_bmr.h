/********************************************************************************
** Form generated from reading UI file 'bmr.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMR_H
#define UI_BMR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_bmr
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_oblicz;
    QLabel *label_4;
    QLineEdit *lineEdit_wiek;
    QPushButton *pushButton_wroc;
    QLineEdit *lineEdit_waga;
    QLabel *label_2;
    QLineEdit *lineEdit_plec;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_bmr;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_wzrost;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *bmr)
    {
        if (bmr->objectName().isEmpty())
            bmr->setObjectName(QString::fromUtf8("bmr"));
        bmr->resize(544, 369);
        gridLayout_2 = new QGridLayout(bmr);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_oblicz = new QPushButton(bmr);
        pushButton_oblicz->setObjectName(QString::fromUtf8("pushButton_oblicz"));
        QFont font;
        font.setPointSize(10);
        pushButton_oblicz->setFont(font);

        gridLayout->addWidget(pushButton_oblicz, 8, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(bmr);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_wiek = new QLineEdit(bmr);
        lineEdit_wiek->setObjectName(QString::fromUtf8("lineEdit_wiek"));
        lineEdit_wiek->setMinimumSize(QSize(200, 0));
        lineEdit_wiek->setMaximumSize(QSize(500, 16777215));
        lineEdit_wiek->setFont(font);

        gridLayout->addWidget(lineEdit_wiek, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_wroc = new QPushButton(bmr);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        pushButton_wroc->setFont(font);

        gridLayout->addWidget(pushButton_wroc, 8, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_waga = new QLineEdit(bmr);
        lineEdit_waga->setObjectName(QString::fromUtf8("lineEdit_waga"));
        lineEdit_waga->setMinimumSize(QSize(200, 0));
        lineEdit_waga->setMaximumSize(QSize(500, 16777215));
        lineEdit_waga->setFont(font);

        gridLayout->addWidget(lineEdit_waga, 4, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_2 = new QLabel(bmr);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_plec = new QLineEdit(bmr);
        lineEdit_plec->setObjectName(QString::fromUtf8("lineEdit_plec"));
        lineEdit_plec->setMinimumSize(QSize(200, 0));
        lineEdit_plec->setMaximumSize(QSize(500, 16777215));
        lineEdit_plec->setFont(font);

        gridLayout->addWidget(lineEdit_plec, 5, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(bmr);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_2->addWidget(label_7, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_bmr = new QLineEdit(bmr);
        lineEdit_bmr->setObjectName(QString::fromUtf8("lineEdit_bmr"));
        lineEdit_bmr->setMinimumSize(QSize(200, 0));
        lineEdit_bmr->setMaximumSize(QSize(500, 16777215));
        lineEdit_bmr->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_bmr, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 2);

        label_3 = new QLabel(bmr);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(bmr);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_wzrost = new QLineEdit(bmr);
        lineEdit_wzrost->setObjectName(QString::fromUtf8("lineEdit_wzrost"));
        lineEdit_wzrost->setMinimumSize(QSize(200, 0));
        lineEdit_wzrost->setMaximumSize(QSize(500, 16777215));
        lineEdit_wzrost->setFont(font);

        gridLayout->addWidget(lineEdit_wzrost, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(bmr);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);

        verticalLayout_3->addWidget(label_5, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        plainTextEdit = new QPlainTextEdit(bmr);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 75));
        plainTextEdit->setFont(font);

        verticalLayout_3->addWidget(plainTextEdit, 0, Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);


        retranslateUi(bmr);

        QMetaObject::connectSlotsByName(bmr);
    } // setupUi

    void retranslateUi(QDialog *bmr)
    {
        bmr->setWindowTitle(QCoreApplication::translate("bmr", "BMR", nullptr));
        pushButton_oblicz->setText(QCoreApplication::translate("bmr", "Oblicz", nullptr));
        label_4->setText(QCoreApplication::translate("bmr", "Podaj p\305\202e\304\207 [k/m]:", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("bmr", "Wr\303\263\304\207", nullptr));
        label_2->setText(QCoreApplication::translate("bmr", "Podaj wiek:", nullptr));
        label_7->setText(QCoreApplication::translate("bmr", "Twoje zapotrzebowanie kaloryczne wynosi:", nullptr));
        label_3->setText(QCoreApplication::translate("bmr", "Podaj wag\304\231 [kg]:", nullptr));
        label->setText(QCoreApplication::translate("bmr", "Podaj wzrost [cm]:", nullptr));
        label_5->setText(QCoreApplication::translate("bmr", "BMR", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("bmr", "BMR (z ang. basal metabolic rate), czyli wska\305\272nik podstawowej przemiany materii (polski skr\303\263t PPM), nazywany r\303\263wnie\305\274 tempem metabolizmu podstawowego, wskazuje najmniejsze dzienne zapotrzebowanie kaloryczne, dzi\304\231ki kt\303\263remu zachowamy podstawowe funkcje \305\274yciowe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bmr: public Ui_bmr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMR_H
