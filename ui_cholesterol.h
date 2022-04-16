/********************************************************************************
** Form generated from reading UI file 'cholesterol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOLESTEROL_H
#define UI_CHOLESTEROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_cholesterol
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *lineEdit_ldl;
    QPushButton *pushButton;
    QLineEdit *lineEdit_stan;
    QLabel *label_6;
    QLabel *label_11;
    QLineEdit *lineEdit_min_2;
    QLineEdit *lineEdit_min;
    QLineEdit *lineEdit_hdl;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit;
    QLineEdit *lineEdit_max_2;
    QLabel *label_8;
    QLineEdit *lineEdit_max;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QLabel *label_7;
    QLineEdit *lineEdit_stan_2;
    QLabel *label_2;

    void setupUi(QDialog *cholesterol)
    {
        if (cholesterol->objectName().isEmpty())
            cholesterol->setObjectName(QString::fromUtf8("cholesterol"));
        cholesterol->resize(638, 342);
        gridLayout_2 = new QGridLayout(cholesterol);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_9 = new QLabel(cholesterol);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setPointSize(10);
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 1, 5, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(cholesterol);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_ldl = new QLineEdit(cholesterol);
        lineEdit_ldl->setObjectName(QString::fromUtf8("lineEdit_ldl"));
        lineEdit_ldl->setMinimumSize(QSize(100, 0));
        lineEdit_ldl->setMaximumSize(QSize(500, 16777215));
        lineEdit_ldl->setFont(font);

        gridLayout->addWidget(lineEdit_ldl, 3, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(cholesterol);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 4, 5, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan = new QLineEdit(cholesterol);
        lineEdit_stan->setObjectName(QString::fromUtf8("lineEdit_stan"));
        lineEdit_stan->setMinimumSize(QSize(100, 0));
        lineEdit_stan->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan->setFont(font);
        lineEdit_stan->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan, 2, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_6 = new QLabel(cholesterol);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 1, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_11 = new QLabel(cholesterol);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout->addWidget(label_11, 3, 5, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_2 = new QLineEdit(cholesterol);
        lineEdit_min_2->setObjectName(QString::fromUtf8("lineEdit_min_2"));
        lineEdit_min_2->setMinimumSize(QSize(100, 0));
        lineEdit_min_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_2->setFont(font);
        lineEdit_min_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_2, 3, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min = new QLineEdit(cholesterol);
        lineEdit_min->setObjectName(QString::fromUtf8("lineEdit_min"));
        lineEdit_min->setMinimumSize(QSize(100, 0));
        lineEdit_min->setMaximumSize(QSize(500, 16777215));
        lineEdit_min->setFont(font);
        lineEdit_min->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min, 2, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_hdl = new QLineEdit(cholesterol);
        lineEdit_hdl->setObjectName(QString::fromUtf8("lineEdit_hdl"));
        lineEdit_hdl->setMinimumSize(QSize(100, 0));
        lineEdit_hdl->setMaximumSize(QSize(500, 16777215));
        lineEdit_hdl->setFont(font);

        gridLayout->addWidget(lineEdit_hdl, 2, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(cholesterol);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        plainTextEdit = new QPlainTextEdit(cholesterol);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMaximumSize(QSize(16777215, 500));
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit, 0, Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 6);

        lineEdit_max_2 = new QLineEdit(cholesterol);
        lineEdit_max_2->setObjectName(QString::fromUtf8("lineEdit_max_2"));
        lineEdit_max_2->setMinimumSize(QSize(100, 0));
        lineEdit_max_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_2->setFont(font);
        lineEdit_max_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_2, 3, 4, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_8 = new QLabel(cholesterol);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 1, 4, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max = new QLineEdit(cholesterol);
        lineEdit_max->setObjectName(QString::fromUtf8("lineEdit_max"));
        lineEdit_max->setMinimumSize(QSize(100, 0));
        lineEdit_max->setMaximumSize(QSize(500, 16777215));
        lineEdit_max->setFont(font);
        lineEdit_max->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max, 2, 4, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_2 = new QPushButton(cholesterol);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 4, 4, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_10 = new QLabel(cholesterol);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 2, 5, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_7 = new QLabel(cholesterol);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_2 = new QLineEdit(cholesterol);
        lineEdit_stan_2->setObjectName(QString::fromUtf8("lineEdit_stan_2"));
        lineEdit_stan_2->setMinimumSize(QSize(100, 0));
        lineEdit_stan_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_2->setFont(font);
        lineEdit_stan_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_2, 3, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_2 = new QLabel(cholesterol);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(cholesterol);

        QMetaObject::connectSlotsByName(cholesterol);
    } // setupUi

    void retranslateUi(QDialog *cholesterol)
    {
        cholesterol->setWindowTitle(QCoreApplication::translate("cholesterol", "Cholesterol", nullptr));
        label_9->setText(QCoreApplication::translate("cholesterol", "Jednostka:", nullptr));
        label_3->setText(QCoreApplication::translate("cholesterol", "Wpisz HDL:", nullptr));
        pushButton->setText(QCoreApplication::translate("cholesterol", "Wr\303\263\304\207", nullptr));
        label_6->setText(QCoreApplication::translate("cholesterol", "Stan:", nullptr));
        label_11->setText(QCoreApplication::translate("cholesterol", "mg/dl", nullptr));
        label_4->setText(QCoreApplication::translate("cholesterol", "Cholesterol", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("cholesterol", "Cholesterol jest substancj\304\205 t\305\202uszczow\304\205 obecn\304\205 we wszystkich kom\303\263rkach oraz krwi. Stanowi sk\305\202adnik b\305\202on kom\303\263rkowych, niekt\303\263rych hormon\303\263w, witaminy D oraz kwas\303\263w \305\274\303\263\305\202ciowych.\n"
"\n"
"Cholesterol LDL to frakcja cholesterolu o niekorzystnym dzia\305\202aniu. Jest odpowiedzialna za transport cholesterolu do tkanek. Cholesterol LDL powstaje w wyniku przemian lipoprotein VLDL produkowanych w w\304\205trobie oraz chylomikron\303\263w powstaj\304\205cych w wyniku wch\305\202aniania t\305\202uszcz\303\263w pokarmowych.\n"
"\n"
"Cholesterol HDL, czyli lipoproteiny wysokiej g\304\231sto\305\233ci (high-density lipoprotein) to frakcja cholesterolu maj\304\205ca korzystny wp\305\202yw na organizm cz\305\202owieka. Inna nazwa cholesterolu HDL to alfa-lipoproteina. Potocznie za\305\233 cholesterol HDL nazywa si\304\231 dobrym cholesterolem.", nullptr));
        label_8->setText(QCoreApplication::translate("cholesterol", "MAX:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cholesterol", "Sprwad\305\272", nullptr));
        label_10->setText(QCoreApplication::translate("cholesterol", "mg/dl", nullptr));
        label_7->setText(QCoreApplication::translate("cholesterol", "MIN:", nullptr));
        label_2->setText(QCoreApplication::translate("cholesterol", "Wpisz LDL:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cholesterol: public Ui_cholesterol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOLESTEROL_H
