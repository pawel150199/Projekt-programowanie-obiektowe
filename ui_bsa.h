/********************************************************************************
** Form generated from reading UI file 'bsa.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BSA_H
#define UI_BSA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bsa
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_5;
    QPushButton *pushButton_oblicz;
    QLabel *label_3;
    QLineEdit *lineEdit_waga;
    QLabel *label_4;
    QPushButton *pushButton_wroc;
    QLineEdit *lineEdit_wzrost;
    QLineEdit *lineEdit_bsa;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *bsa)
    {
        if (bsa->objectName().isEmpty())
            bsa->setObjectName(QString::fromUtf8("bsa"));
        bsa->resize(400, 300);
        gridLayout_2 = new QGridLayout(bsa);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(bsa);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(bsa);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setPointSize(10);
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 5, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_oblicz = new QPushButton(bsa);
        pushButton_oblicz->setObjectName(QString::fromUtf8("pushButton_oblicz"));
        pushButton_oblicz->setFont(font1);

        gridLayout->addWidget(pushButton_oblicz, 6, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(bsa);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_waga = new QLineEdit(bsa);
        lineEdit_waga->setObjectName(QString::fromUtf8("lineEdit_waga"));
        lineEdit_waga->setMinimumSize(QSize(200, 0));
        lineEdit_waga->setMaximumSize(QSize(500, 16777215));
        lineEdit_waga->setFont(font1);

        gridLayout->addWidget(lineEdit_waga, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(bsa);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 4, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_wroc = new QPushButton(bsa);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        pushButton_wroc->setFont(font1);

        gridLayout->addWidget(pushButton_wroc, 6, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_wzrost = new QLineEdit(bsa);
        lineEdit_wzrost->setObjectName(QString::fromUtf8("lineEdit_wzrost"));
        lineEdit_wzrost->setMinimumSize(QSize(200, 0));
        lineEdit_wzrost->setMaximumSize(QSize(500, 16777215));
        lineEdit_wzrost->setFont(font1);

        gridLayout->addWidget(lineEdit_wzrost, 4, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_bsa = new QLineEdit(bsa);
        lineEdit_bsa->setObjectName(QString::fromUtf8("lineEdit_bsa"));
        lineEdit_bsa->setMinimumSize(QSize(200, 0));
        lineEdit_bsa->setMaximumSize(QSize(500, 16777215));
        lineEdit_bsa->setFont(font1);
        lineEdit_bsa->setReadOnly(true);

        gridLayout->addWidget(lineEdit_bsa, 5, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        plainTextEdit = new QPlainTextEdit(bsa);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setFont(font1);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 2, Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(bsa);

        QMetaObject::connectSlotsByName(bsa);
    } // setupUi

    void retranslateUi(QDialog *bsa)
    {
        bsa->setWindowTitle(QCoreApplication::translate("bsa", "BSA", nullptr));
        label->setText(QCoreApplication::translate("bsa", "BSA", nullptr));
        label_5->setText(QCoreApplication::translate("bsa", "BSA wynosi [m^2]:", nullptr));
        pushButton_oblicz->setText(QCoreApplication::translate("bsa", "Oblicz", nullptr));
        label_3->setText(QCoreApplication::translate("bsa", "Waga [kg]:", nullptr));
        label_4->setText(QCoreApplication::translate("bsa", "Wzrost [cm]:", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("bsa", "Wr\303\263\304\207", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("bsa", "Wyniki wyszukiwania\n"
"Fragment z odpowiedzi\304\205 z internetu\n"
"BSA \342\200\223 powierzchnia cia\305\202a. Parametr BSA jest niezb\304\231dny do okre\305\233lenia dawkowania wielu lek\303\263w oraz obliczenia niekt\303\263rych parametr\303\263w fizjologicznych (np. wska\305\272nika sercowego). Do obliczenia konieczna jest masa cia\305\202a i wzrost pacjenta.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bsa: public Ui_bsa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BSA_H
