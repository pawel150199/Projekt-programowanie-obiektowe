/********************************************************************************
** Form generated from reading UI file 'normy.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMY_H
#define UI_NORMY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_normy
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_otworz;
    QPushButton *pushButton_wroc;
    QPushButton *pushButton_zapisz;
    QPlainTextEdit *plainTextEdit_2;

    void setupUi(QDialog *normy)
    {
        if (normy->objectName().isEmpty())
            normy->setObjectName(QString::fromUtf8("normy"));
        normy->resize(307, 372);
        gridLayout_2 = new QGridLayout(normy);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        plainTextEdit = new QPlainTextEdit(normy);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QFont font;
        font.setPointSize(10);
        plainTextEdit->setFont(font);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 1);

        pushButton_otworz = new QPushButton(normy);
        pushButton_otworz->setObjectName(QString::fromUtf8("pushButton_otworz"));
        pushButton_otworz->setFont(font);

        gridLayout->addWidget(pushButton_otworz, 0, 0, 1, 1);

        pushButton_wroc = new QPushButton(normy);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        pushButton_wroc->setFont(font);

        gridLayout->addWidget(pushButton_wroc, 4, 0, 1, 1);

        pushButton_zapisz = new QPushButton(normy);
        pushButton_zapisz->setObjectName(QString::fromUtf8("pushButton_zapisz"));
        pushButton_zapisz->setFont(font);

        gridLayout->addWidget(pushButton_zapisz, 3, 0, 1, 1);

        plainTextEdit_2 = new QPlainTextEdit(normy);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setFont(font);

        gridLayout->addWidget(plainTextEdit_2, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(normy);

        QMetaObject::connectSlotsByName(normy);
    } // setupUi

    void retranslateUi(QDialog *normy)
    {
        normy->setWindowTitle(QCoreApplication::translate("normy", "Normy", nullptr));
        pushButton_otworz->setText(QCoreApplication::translate("normy", "Otw\303\263rz plik normy", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("normy", "Wr\303\263\304\207", nullptr));
        pushButton_zapisz->setText(QCoreApplication::translate("normy", "Zapisz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class normy: public Ui_normy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMY_H
