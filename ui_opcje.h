/********************************************************************************
** Form generated from reading UI file 'opcje.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPCJE_H
#define UI_OPCJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_opcje
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_bmi;
    QPushButton *pushButton_morfologia;
    QPushButton *pushButton_cholesterol;
    QPushButton *pushButton_bmr;
    QPushButton *pushButton_kalkulatorciazy;
    QPushButton *pushButton_cisnienietetnicze;
    QPushButton *pushButton_bsa;
    QPushButton *pushButton_bf;
    QPushButton *pushButton_cukrzyca;
    QPushButton *pushButton_zamianajednostek;
    QPushButton *pushButton_admin;

    void setupUi(QMainWindow *opcje)
    {
        if (opcje->objectName().isEmpty())
            opcje->setObjectName(QString::fromUtf8("opcje"));
        opcje->setEnabled(true);
        opcje->resize(647, 612);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        opcje->setFont(font);
        opcje->setAutoFillBackground(true);
        centralwidget = new QWidget(opcje);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(27);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_bmi = new QPushButton(centralwidget);
        pushButton_bmi->setObjectName(QString::fromUtf8("pushButton_bmi"));
        pushButton_bmi->setMinimumSize(QSize(150, 30));
        QFont font2;
        font2.setPointSize(13);
        font2.setStyleStrategy(QFont::PreferAntialias);
        pushButton_bmi->setFont(font2);

        verticalLayout->addWidget(pushButton_bmi, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_morfologia = new QPushButton(centralwidget);
        pushButton_morfologia->setObjectName(QString::fromUtf8("pushButton_morfologia"));
        pushButton_morfologia->setMinimumSize(QSize(150, 30));
        pushButton_morfologia->setFont(font2);

        verticalLayout->addWidget(pushButton_morfologia, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_cholesterol = new QPushButton(centralwidget);
        pushButton_cholesterol->setObjectName(QString::fromUtf8("pushButton_cholesterol"));
        pushButton_cholesterol->setMinimumSize(QSize(150, 30));
        pushButton_cholesterol->setFont(font2);

        verticalLayout->addWidget(pushButton_cholesterol, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_bmr = new QPushButton(centralwidget);
        pushButton_bmr->setObjectName(QString::fromUtf8("pushButton_bmr"));
        pushButton_bmr->setMinimumSize(QSize(150, 30));
        pushButton_bmr->setFont(font2);

        verticalLayout->addWidget(pushButton_bmr, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_kalkulatorciazy = new QPushButton(centralwidget);
        pushButton_kalkulatorciazy->setObjectName(QString::fromUtf8("pushButton_kalkulatorciazy"));
        pushButton_kalkulatorciazy->setMinimumSize(QSize(150, 30));
        pushButton_kalkulatorciazy->setFont(font2);

        verticalLayout->addWidget(pushButton_kalkulatorciazy, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_cisnienietetnicze = new QPushButton(centralwidget);
        pushButton_cisnienietetnicze->setObjectName(QString::fromUtf8("pushButton_cisnienietetnicze"));
        pushButton_cisnienietetnicze->setMinimumSize(QSize(150, 30));
        pushButton_cisnienietetnicze->setFont(font2);

        verticalLayout->addWidget(pushButton_cisnienietetnicze, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_bsa = new QPushButton(centralwidget);
        pushButton_bsa->setObjectName(QString::fromUtf8("pushButton_bsa"));
        pushButton_bsa->setMinimumSize(QSize(150, 30));
        pushButton_bsa->setFont(font2);

        verticalLayout->addWidget(pushButton_bsa, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_bf = new QPushButton(centralwidget);
        pushButton_bf->setObjectName(QString::fromUtf8("pushButton_bf"));
        pushButton_bf->setMinimumSize(QSize(150, 30));
        pushButton_bf->setFont(font2);

        verticalLayout->addWidget(pushButton_bf, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_cukrzyca = new QPushButton(centralwidget);
        pushButton_cukrzyca->setObjectName(QString::fromUtf8("pushButton_cukrzyca"));
        pushButton_cukrzyca->setMinimumSize(QSize(150, 30));
        pushButton_cukrzyca->setFont(font2);

        verticalLayout->addWidget(pushButton_cukrzyca, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_zamianajednostek = new QPushButton(centralwidget);
        pushButton_zamianajednostek->setObjectName(QString::fromUtf8("pushButton_zamianajednostek"));
        pushButton_zamianajednostek->setMinimumSize(QSize(150, 30));
        pushButton_zamianajednostek->setFont(font2);

        verticalLayout->addWidget(pushButton_zamianajednostek, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_admin = new QPushButton(centralwidget);
        pushButton_admin->setObjectName(QString::fromUtf8("pushButton_admin"));

        verticalLayout->addWidget(pushButton_admin, 0, Qt::AlignLeft|Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        opcje->setCentralWidget(centralwidget);

        retranslateUi(opcje);

        QMetaObject::connectSlotsByName(opcje);
    } // setupUi

    void retranslateUi(QMainWindow *opcje)
    {
        opcje->setWindowTitle(QCoreApplication::translate("opcje", "Kalkulator Medyczny", nullptr));
        label->setText(QCoreApplication::translate("opcje", "Kalkulator medyczny", nullptr));
        pushButton_bmi->setText(QCoreApplication::translate("opcje", "BMI", nullptr));
        pushButton_morfologia->setText(QCoreApplication::translate("opcje", "Morfologia", nullptr));
        pushButton_cholesterol->setText(QCoreApplication::translate("opcje", "Cholesterol", nullptr));
        pushButton_bmr->setText(QCoreApplication::translate("opcje", "BMR", nullptr));
        pushButton_kalkulatorciazy->setText(QCoreApplication::translate("opcje", "Kalkulator ci\304\205\305\274y", nullptr));
        pushButton_cisnienietetnicze->setText(QCoreApplication::translate("opcje", "Ci\305\233nienie t\304\231tnicze", nullptr));
        pushButton_bsa->setText(QCoreApplication::translate("opcje", "BSA", nullptr));
        pushButton_bf->setText(QCoreApplication::translate("opcje", "BF", nullptr));
        pushButton_cukrzyca->setText(QCoreApplication::translate("opcje", "Cukrzyca", nullptr));
        pushButton_zamianajednostek->setText(QCoreApplication::translate("opcje", "Zamiana jednostek", nullptr));
        pushButton_admin->setText(QCoreApplication::translate("opcje", "Zaloguj jako admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class opcje: public Ui_opcje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPCJE_H
