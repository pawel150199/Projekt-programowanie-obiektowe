/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_haslo;
    QLineEdit *lineEdit_nazwa;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_wroc;
    QPushButton *pushButton_login;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(349, 214);
        gridLayout_2 = new QGridLayout(admin);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(admin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_haslo = new QLineEdit(groupBox);
        lineEdit_haslo->setObjectName(QString::fromUtf8("lineEdit_haslo"));
        lineEdit_haslo->setMaximumSize(QSize(500, 16777215));
        lineEdit_haslo->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_haslo, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_nazwa = new QLineEdit(groupBox);
        lineEdit_nazwa->setObjectName(QString::fromUtf8("lineEdit_nazwa"));
        lineEdit_nazwa->setMaximumSize(QSize(500, 16777215));

        gridLayout->addWidget(lineEdit_nazwa, 0, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_wroc = new QPushButton(groupBox);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));

        gridLayout->addWidget(pushButton_wroc, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));

        gridLayout->addWidget(pushButton_login, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Logowanie", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admin", "Logowanie", nullptr));
        label->setText(QCoreApplication::translate("admin", "Nazwa u\305\274ytkownika:", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "Has\305\202o:", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("admin", "Wr\303\263\304\207", nullptr));
        pushButton_login->setText(QCoreApplication::translate("admin", "Zaloguj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
