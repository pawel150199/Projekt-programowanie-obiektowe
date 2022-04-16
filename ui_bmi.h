/********************************************************************************
** Form generated from reading UI file 'bmi.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BMI_H
#define UI_BMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bmi
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_plec;
    QPushButton *pushButton;
    QLabel *label_wzrost;
    QLineEdit *lineEdit_bmi;
    QLabel *label_waga;
    QLineEdit *lineEdit_waga;
    QLabel *label_plec;
    QLineEdit *lineEdit_bmi_2;
    QPushButton *pushButton_wroc;
    QLabel *label_bmi_2;
    QLineEdit *lineEdit_wzrost;
    QLabel *label_bmi;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *bmi)
    {
        if (bmi->objectName().isEmpty())
            bmi->setObjectName(QString::fromUtf8("bmi"));
        bmi->resize(488, 386);
        gridLayout_2 = new QGridLayout(bmi);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_plec = new QLineEdit(bmi);
        lineEdit_plec->setObjectName(QString::fromUtf8("lineEdit_plec"));
        lineEdit_plec->setMinimumSize(QSize(200, 0));
        lineEdit_plec->setMaximumSize(QSize(500, 16777215));
        QFont font;
        font.setPointSize(10);
        lineEdit_plec->setFont(font);

        gridLayout->addWidget(lineEdit_plec, 5, 1, 1, 1, Qt::AlignHCenter);

        pushButton = new QPushButton(bmi);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 8, 0, 1, 1, Qt::AlignHCenter);

        label_wzrost = new QLabel(bmi);
        label_wzrost->setObjectName(QString::fromUtf8("label_wzrost"));
        label_wzrost->setMinimumSize(QSize(100, 0));
        label_wzrost->setFont(font);

        gridLayout->addWidget(label_wzrost, 3, 0, 1, 1, Qt::AlignHCenter);

        lineEdit_bmi = new QLineEdit(bmi);
        lineEdit_bmi->setObjectName(QString::fromUtf8("lineEdit_bmi"));
        lineEdit_bmi->setMinimumSize(QSize(200, 0));
        lineEdit_bmi->setMaximumSize(QSize(500, 16777215));
        lineEdit_bmi->setFont(font);
        lineEdit_bmi->setReadOnly(true);

        gridLayout->addWidget(lineEdit_bmi, 6, 1, 1, 1, Qt::AlignHCenter);

        label_waga = new QLabel(bmi);
        label_waga->setObjectName(QString::fromUtf8("label_waga"));
        label_waga->setFont(font);

        gridLayout->addWidget(label_waga, 4, 0, 1, 1, Qt::AlignHCenter);

        lineEdit_waga = new QLineEdit(bmi);
        lineEdit_waga->setObjectName(QString::fromUtf8("lineEdit_waga"));
        lineEdit_waga->setMinimumSize(QSize(200, 0));
        lineEdit_waga->setMaximumSize(QSize(500, 16777215));
        lineEdit_waga->setFont(font);

        gridLayout->addWidget(lineEdit_waga, 4, 1, 1, 1, Qt::AlignHCenter);

        label_plec = new QLabel(bmi);
        label_plec->setObjectName(QString::fromUtf8("label_plec"));
        label_plec->setFont(font);

        gridLayout->addWidget(label_plec, 5, 0, 1, 1, Qt::AlignHCenter);

        lineEdit_bmi_2 = new QLineEdit(bmi);
        lineEdit_bmi_2->setObjectName(QString::fromUtf8("lineEdit_bmi_2"));
        lineEdit_bmi_2->setMinimumSize(QSize(200, 0));
        lineEdit_bmi_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_bmi_2->setFont(font);
        lineEdit_bmi_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_bmi_2, 7, 1, 1, 1, Qt::AlignHCenter);

        pushButton_wroc = new QPushButton(bmi);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        pushButton_wroc->setFont(font);

        gridLayout->addWidget(pushButton_wroc, 8, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_bmi_2 = new QLabel(bmi);
        label_bmi_2->setObjectName(QString::fromUtf8("label_bmi_2"));
        label_bmi_2->setFont(font);

        gridLayout->addWidget(label_bmi_2, 7, 0, 1, 1, Qt::AlignHCenter);

        lineEdit_wzrost = new QLineEdit(bmi);
        lineEdit_wzrost->setObjectName(QString::fromUtf8("lineEdit_wzrost"));
        lineEdit_wzrost->setMinimumSize(QSize(200, 0));
        lineEdit_wzrost->setMaximumSize(QSize(500, 16777215));
        lineEdit_wzrost->setFont(font);

        gridLayout->addWidget(lineEdit_wzrost, 3, 1, 1, 1, Qt::AlignHCenter);

        label_bmi = new QLabel(bmi);
        label_bmi->setObjectName(QString::fromUtf8("label_bmi"));
        label_bmi->setFont(font);

        gridLayout->addWidget(label_bmi, 6, 0, 1, 1, Qt::AlignHCenter);


        gridLayout_3->addLayout(gridLayout, 2, 0, 4, 1);

        label_3 = new QLabel(bmi);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        plainTextEdit = new QPlainTextEdit(bmi);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 75));
        plainTextEdit->setFont(font);

        gridLayout_3->addWidget(plainTextEdit, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 1, 1, 1);


        retranslateUi(bmi);

        QMetaObject::connectSlotsByName(bmi);
    } // setupUi

    void retranslateUi(QDialog *bmi)
    {
        bmi->setWindowTitle(QCoreApplication::translate("bmi", "BMI", "BMI"));
        pushButton->setText(QCoreApplication::translate("bmi", "Oblicz BMI:", nullptr));
        label_wzrost->setText(QCoreApplication::translate("bmi", "Wpisz wzrost [cm]:", nullptr));
        label_waga->setText(QCoreApplication::translate("bmi", "Wpisz wag\304\231 [kg]:", nullptr));
        label_plec->setText(QCoreApplication::translate("bmi", "Wpisz p\305\202e\304\207 [k/m]:", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("bmi", "Wr\303\263\304\207", nullptr));
        label_bmi_2->setText(QCoreApplication::translate("bmi", "Twoje BMi jest:", nullptr));
        label_bmi->setText(QCoreApplication::translate("bmi", "Twoje BMI wynosi:", nullptr));
        label_3->setText(QCoreApplication::translate("bmi", "BMI", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("bmi", "Wska\305\272nik masy cia\305\202a, tak\305\274e wska\305\272nik Queteleta II \342\200\223 wsp\303\263\305\202czynnik powsta\305\202y przez podzielenie masy cia\305\202a podanej w kilogramach przez kwadrat wysoko\305\233ci podanej w metrach. Klasyfikacja wska\305\272nika BMI zosta\305\202a opracowana wy\305\202\304\205cznie dla doros\305\202ych i nie mo\305\274e by\304\207 stosowana u dzieci", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bmi: public Ui_bmi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BMI_H
