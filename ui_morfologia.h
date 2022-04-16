/********************************************************************************
** Form generated from reading UI file 'morfologia.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORFOLOGIA_H
#define UI_MORFOLOGIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_morfologia
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_max_9;
    QLineEdit *lineEdit_mch;
    QVBoxLayout *verticalLayout;
    QLabel *label_65;
    QLabel *label_10;
    QLineEdit *lineEdit_min_12;
    QLineEdit *lineEdit_stan_8;
    QLineEdit *lineEdit_eos;
    QLabel *label_4;
    QLineEdit *lineEdit_max_8;
    QLineEdit *lineEdit_max_3;
    QLabel *label_34;
    QLineEdit *lineEdit_max_12;
    QLabel *label_;
    QPushButton *pushButton_wroc;
    QLineEdit *lineEdit_limfocyty;
    QLineEdit *lineEdit_stan_11;
    QLabel *label_22;
    QLineEdit *lineEdit_min_6;
    QPushButton *pushButton_sprawdz;
    QLabel *label_23;
    QLineEdit *lineEdit_net;
    QLineEdit *lineEdit_bas;
    QLineEdit *lineEdit_erytrocyty;
    QLabel *label_35;
    QLineEdit *lineEdit_hemoglobina;
    QLineEdit *lineEdit_stan_10;
    QLineEdit *lineEdit_min_9;
    QLineEdit *lineEdit_max;
    QLineEdit *lineEdit_mcv;
    QLineEdit *lineEdit_stan_7;
    QLineEdit *lineEdit_min_4;
    QLabel *label_20;
    QLineEdit *lineEdit_stan_4;
    QLineEdit *lineEdit_stan_9;
    QLineEdit *lineEdit_max_11;
    QLabel *label_27;
    QLabel *label_14;
    QLabel *label_3;
    QLineEdit *lineEdit_hematokryt;
    QLineEdit *lineEdit_stan_6;
    QLineEdit *lineEdit_mchc;
    QLineEdit *lineEdit_monocyty;
    QLabel *label_21;
    QLabel *label_17;
    QLineEdit *lineEdit_min_3;
    QLineEdit *lineEdit_min_10;
    QLabel *label_29;
    QLabel *label_36;
    QLineEdit *lineEdit_stan_12;
    QLabel *label_32;
    QLineEdit *lineEdit_max_5;
    QLineEdit *lineEdit_min_2;
    QLineEdit *lineEdit_max_6;
    QLineEdit *lineEdit_stan_3;
    QLabel *label_16;
    QLabel *label_31;
    QLabel *label_7;
    QLabel *label_19;
    QLineEdit *lineEdit_min_8;
    QLineEdit *lineEdit_min;
    QLabel *label_15;
    QLabel *label_6;
    QLineEdit *lineEdit_stan_2;
    QLineEdit *lineEdit_max_7;
    QLineEdit *lineEdit_leukocyty;
    QLabel *label_18;
    QLabel *label_5;
    QLabel *label_26;
    QLineEdit *lineEdit_max_2;
    QLabel *label_28;
    QLineEdit *lineEdit_min_7;
    QLineEdit *lineEdit_min_5;
    QLineEdit *lineEdit_min_11;
    QLineEdit *lineEdit_max_4;
    QLabel *label_2;
    QLineEdit *lineEdit_max_10;
    QLabel *label_30;
    QLabel *label_33;
    QLineEdit *lineEdit_stan_5;
    QLineEdit *lineEdit_stan;
    QLabel *label;

    void setupUi(QDialog *morfologia)
    {
        if (morfologia->objectName().isEmpty())
            morfologia->setObjectName(QString::fromUtf8("morfologia"));
        morfologia->resize(838, 586);
        gridLayout_2 = new QGridLayout(morfologia);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_max_9 = new QLineEdit(morfologia);
        lineEdit_max_9->setObjectName(QString::fromUtf8("lineEdit_max_9"));
        lineEdit_max_9->setMinimumSize(QSize(100, 0));
        lineEdit_max_9->setMaximumSize(QSize(500, 16777215));
        QFont font;
        font.setPointSize(10);
        lineEdit_max_9->setFont(font);
        lineEdit_max_9->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_9, 13, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_mch = new QLineEdit(morfologia);
        lineEdit_mch->setObjectName(QString::fromUtf8("lineEdit_mch"));
        lineEdit_mch->setMinimumSize(QSize(100, 0));
        lineEdit_mch->setMaximumSize(QSize(500, 16777215));
        lineEdit_mch->setFont(font);

        gridLayout->addWidget(lineEdit_mch, 9, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_65 = new QLabel(morfologia);
        label_65->setObjectName(QString::fromUtf8("label_65"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_65->setFont(font1);

        verticalLayout->addWidget(label_65, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 8);

        label_10 = new QLabel(morfologia);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 5, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_12 = new QLineEdit(morfologia);
        lineEdit_min_12->setObjectName(QString::fromUtf8("lineEdit_min_12"));
        lineEdit_min_12->setMinimumSize(QSize(100, 0));
        lineEdit_min_12->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_12->setFont(font);
        lineEdit_min_12->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_12, 16, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_8 = new QLineEdit(morfologia);
        lineEdit_stan_8->setObjectName(QString::fromUtf8("lineEdit_stan_8"));
        lineEdit_stan_8->setMinimumSize(QSize(100, 0));
        lineEdit_stan_8->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_8->setFont(font);
        lineEdit_stan_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_8, 12, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_eos = new QLineEdit(morfologia);
        lineEdit_eos->setObjectName(QString::fromUtf8("lineEdit_eos"));
        lineEdit_eos->setMinimumSize(QSize(100, 0));
        lineEdit_eos->setMaximumSize(QSize(500, 16777215));
        lineEdit_eos->setFont(font);

        gridLayout->addWidget(lineEdit_eos, 15, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_4 = new QLabel(morfologia);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_8 = new QLineEdit(morfologia);
        lineEdit_max_8->setObjectName(QString::fromUtf8("lineEdit_max_8"));
        lineEdit_max_8->setMinimumSize(QSize(100, 0));
        lineEdit_max_8->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_8->setFont(font);
        lineEdit_max_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_8, 12, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_3 = new QLineEdit(morfologia);
        lineEdit_max_3->setObjectName(QString::fromUtf8("lineEdit_max_3"));
        lineEdit_max_3->setMinimumSize(QSize(100, 0));
        lineEdit_max_3->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_3->setFont(font);
        lineEdit_max_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_3, 7, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_34 = new QLabel(morfologia);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font);

        gridLayout->addWidget(label_34, 14, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_12 = new QLineEdit(morfologia);
        lineEdit_max_12->setObjectName(QString::fromUtf8("lineEdit_max_12"));
        lineEdit_max_12->setMinimumSize(QSize(100, 0));
        lineEdit_max_12->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_12->setFont(font);
        lineEdit_max_12->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_12, 16, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_ = new QLabel(morfologia);
        label_->setObjectName(QString::fromUtf8("label_"));
        label_->setFont(font);

        gridLayout->addWidget(label_, 6, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_wroc = new QPushButton(morfologia);
        pushButton_wroc->setObjectName(QString::fromUtf8("pushButton_wroc"));
        pushButton_wroc->setFont(font);

        gridLayout->addWidget(pushButton_wroc, 17, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_limfocyty = new QLineEdit(morfologia);
        lineEdit_limfocyty->setObjectName(QString::fromUtf8("lineEdit_limfocyty"));
        lineEdit_limfocyty->setMinimumSize(QSize(100, 0));
        lineEdit_limfocyty->setMaximumSize(QSize(500, 16777215));
        lineEdit_limfocyty->setFont(font);

        gridLayout->addWidget(lineEdit_limfocyty, 12, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_11 = new QLineEdit(morfologia);
        lineEdit_stan_11->setObjectName(QString::fromUtf8("lineEdit_stan_11"));
        lineEdit_stan_11->setMinimumSize(QSize(100, 0));
        lineEdit_stan_11->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_11->setFont(font);
        lineEdit_stan_11->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_11, 15, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_22 = new QLabel(morfologia);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);

        gridLayout->addWidget(label_22, 15, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_6 = new QLineEdit(morfologia);
        lineEdit_min_6->setObjectName(QString::fromUtf8("lineEdit_min_6"));
        lineEdit_min_6->setMinimumSize(QSize(100, 0));
        lineEdit_min_6->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_6->setFont(font);
        lineEdit_min_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_6, 10, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton_sprawdz = new QPushButton(morfologia);
        pushButton_sprawdz->setObjectName(QString::fromUtf8("pushButton_sprawdz"));
        pushButton_sprawdz->setFont(font);

        gridLayout->addWidget(pushButton_sprawdz, 17, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_23 = new QLabel(morfologia);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        gridLayout->addWidget(label_23, 16, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_net = new QLineEdit(morfologia);
        lineEdit_net->setObjectName(QString::fromUtf8("lineEdit_net"));
        lineEdit_net->setMinimumSize(QSize(100, 0));
        lineEdit_net->setMaximumSize(QSize(500, 16777215));
        lineEdit_net->setFont(font);

        gridLayout->addWidget(lineEdit_net, 14, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_bas = new QLineEdit(morfologia);
        lineEdit_bas->setObjectName(QString::fromUtf8("lineEdit_bas"));
        lineEdit_bas->setMinimumSize(QSize(100, 0));
        lineEdit_bas->setMaximumSize(QSize(500, 16777215));
        lineEdit_bas->setFont(font);

        gridLayout->addWidget(lineEdit_bas, 16, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_erytrocyty = new QLineEdit(morfologia);
        lineEdit_erytrocyty->setObjectName(QString::fromUtf8("lineEdit_erytrocyty"));
        lineEdit_erytrocyty->setMinimumSize(QSize(100, 0));
        lineEdit_erytrocyty->setMaximumSize(QSize(500, 16777215));
        lineEdit_erytrocyty->setFont(font);

        gridLayout->addWidget(lineEdit_erytrocyty, 5, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_35 = new QLabel(morfologia);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setFont(font);

        gridLayout->addWidget(label_35, 15, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_hemoglobina = new QLineEdit(morfologia);
        lineEdit_hemoglobina->setObjectName(QString::fromUtf8("lineEdit_hemoglobina"));
        lineEdit_hemoglobina->setMinimumSize(QSize(100, 0));
        lineEdit_hemoglobina->setMaximumSize(QSize(500, 16777215));
        lineEdit_hemoglobina->setFont(font);

        gridLayout->addWidget(lineEdit_hemoglobina, 6, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_10 = new QLineEdit(morfologia);
        lineEdit_stan_10->setObjectName(QString::fromUtf8("lineEdit_stan_10"));
        lineEdit_stan_10->setMinimumSize(QSize(100, 0));
        lineEdit_stan_10->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_10->setFont(font);
        lineEdit_stan_10->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_10, 14, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_9 = new QLineEdit(morfologia);
        lineEdit_min_9->setObjectName(QString::fromUtf8("lineEdit_min_9"));
        lineEdit_min_9->setMinimumSize(QSize(100, 0));
        lineEdit_min_9->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_9->setFont(font);
        lineEdit_min_9->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_9, 13, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max = new QLineEdit(morfologia);
        lineEdit_max->setObjectName(QString::fromUtf8("lineEdit_max"));
        lineEdit_max->setMinimumSize(QSize(100, 0));
        lineEdit_max->setMaximumSize(QSize(500, 16777215));
        lineEdit_max->setFont(font);
        lineEdit_max->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max, 5, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_mcv = new QLineEdit(morfologia);
        lineEdit_mcv->setObjectName(QString::fromUtf8("lineEdit_mcv"));
        lineEdit_mcv->setMinimumSize(QSize(100, 0));
        lineEdit_mcv->setMaximumSize(QSize(500, 16777215));
        lineEdit_mcv->setFont(font);

        gridLayout->addWidget(lineEdit_mcv, 8, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_7 = new QLineEdit(morfologia);
        lineEdit_stan_7->setObjectName(QString::fromUtf8("lineEdit_stan_7"));
        lineEdit_stan_7->setMinimumSize(QSize(100, 0));
        lineEdit_stan_7->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_7->setFont(font);
        lineEdit_stan_7->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_7, 11, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_4 = new QLineEdit(morfologia);
        lineEdit_min_4->setObjectName(QString::fromUtf8("lineEdit_min_4"));
        lineEdit_min_4->setMinimumSize(QSize(100, 0));
        lineEdit_min_4->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_4->setFont(font);
        lineEdit_min_4->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_4, 8, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_20 = new QLabel(morfologia);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        gridLayout->addWidget(label_20, 13, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_4 = new QLineEdit(morfologia);
        lineEdit_stan_4->setObjectName(QString::fromUtf8("lineEdit_stan_4"));
        lineEdit_stan_4->setMinimumSize(QSize(100, 0));
        lineEdit_stan_4->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_4->setFont(font);
        lineEdit_stan_4->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_4, 8, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_9 = new QLineEdit(morfologia);
        lineEdit_stan_9->setObjectName(QString::fromUtf8("lineEdit_stan_9"));
        lineEdit_stan_9->setMinimumSize(QSize(100, 0));
        lineEdit_stan_9->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_9->setFont(font);
        lineEdit_stan_9->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_9, 13, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_11 = new QLineEdit(morfologia);
        lineEdit_max_11->setObjectName(QString::fromUtf8("lineEdit_max_11"));
        lineEdit_max_11->setMinimumSize(QSize(100, 0));
        lineEdit_max_11->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_11->setFont(font);
        lineEdit_max_11->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_11, 15, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_27 = new QLabel(morfologia);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font);

        gridLayout->addWidget(label_27, 7, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_14 = new QLabel(morfologia);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        gridLayout->addWidget(label_14, 7, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_3 = new QLabel(morfologia);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_hematokryt = new QLineEdit(morfologia);
        lineEdit_hematokryt->setObjectName(QString::fromUtf8("lineEdit_hematokryt"));
        lineEdit_hematokryt->setMinimumSize(QSize(100, 0));
        lineEdit_hematokryt->setMaximumSize(QSize(500, 16777215));
        lineEdit_hematokryt->setFont(font);

        gridLayout->addWidget(lineEdit_hematokryt, 7, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_6 = new QLineEdit(morfologia);
        lineEdit_stan_6->setObjectName(QString::fromUtf8("lineEdit_stan_6"));
        lineEdit_stan_6->setMinimumSize(QSize(100, 0));
        lineEdit_stan_6->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_6->setFont(font);
        lineEdit_stan_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_6, 10, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_mchc = new QLineEdit(morfologia);
        lineEdit_mchc->setObjectName(QString::fromUtf8("lineEdit_mchc"));
        lineEdit_mchc->setMinimumSize(QSize(100, 0));
        lineEdit_mchc->setMaximumSize(QSize(500, 16777215));
        lineEdit_mchc->setFont(font);

        gridLayout->addWidget(lineEdit_mchc, 10, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_monocyty = new QLineEdit(morfologia);
        lineEdit_monocyty->setObjectName(QString::fromUtf8("lineEdit_monocyty"));
        lineEdit_monocyty->setMinimumSize(QSize(100, 0));
        lineEdit_monocyty->setMaximumSize(QSize(500, 16777215));
        lineEdit_monocyty->setFont(font);

        gridLayout->addWidget(lineEdit_monocyty, 13, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_21 = new QLabel(morfologia);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        gridLayout->addWidget(label_21, 14, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_17 = new QLabel(morfologia);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        gridLayout->addWidget(label_17, 10, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_3 = new QLineEdit(morfologia);
        lineEdit_min_3->setObjectName(QString::fromUtf8("lineEdit_min_3"));
        lineEdit_min_3->setMinimumSize(QSize(100, 0));
        lineEdit_min_3->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_3->setFont(font);
        lineEdit_min_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_3, 7, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_10 = new QLineEdit(morfologia);
        lineEdit_min_10->setObjectName(QString::fromUtf8("lineEdit_min_10"));
        lineEdit_min_10->setMinimumSize(QSize(100, 0));
        lineEdit_min_10->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_10->setFont(font);
        lineEdit_min_10->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_10, 14, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_29 = new QLabel(morfologia);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setFont(font);

        gridLayout->addWidget(label_29, 9, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_36 = new QLabel(morfologia);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setFont(font);

        gridLayout->addWidget(label_36, 16, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_12 = new QLineEdit(morfologia);
        lineEdit_stan_12->setObjectName(QString::fromUtf8("lineEdit_stan_12"));
        lineEdit_stan_12->setMinimumSize(QSize(100, 0));
        lineEdit_stan_12->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_12->setFont(font);
        lineEdit_stan_12->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_12, 16, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_32 = new QLabel(morfologia);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setFont(font);

        gridLayout->addWidget(label_32, 12, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_5 = new QLineEdit(morfologia);
        lineEdit_max_5->setObjectName(QString::fromUtf8("lineEdit_max_5"));
        lineEdit_max_5->setMinimumSize(QSize(100, 0));
        lineEdit_max_5->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_5->setFont(font);
        lineEdit_max_5->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_5, 9, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_2 = new QLineEdit(morfologia);
        lineEdit_min_2->setObjectName(QString::fromUtf8("lineEdit_min_2"));
        lineEdit_min_2->setMinimumSize(QSize(100, 0));
        lineEdit_min_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_2->setFont(font);
        lineEdit_min_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_2, 6, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_6 = new QLineEdit(morfologia);
        lineEdit_max_6->setObjectName(QString::fromUtf8("lineEdit_max_6"));
        lineEdit_max_6->setMinimumSize(QSize(100, 0));
        lineEdit_max_6->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_6->setFont(font);
        lineEdit_max_6->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_6, 10, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_3 = new QLineEdit(morfologia);
        lineEdit_stan_3->setObjectName(QString::fromUtf8("lineEdit_stan_3"));
        lineEdit_stan_3->setMinimumSize(QSize(100, 0));
        lineEdit_stan_3->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_3->setFont(font);
        lineEdit_stan_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_3, 7, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_16 = new QLabel(morfologia);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout->addWidget(label_16, 9, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_31 = new QLabel(morfologia);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font);

        gridLayout->addWidget(label_31, 11, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_7 = new QLabel(morfologia);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 1, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_19 = new QLabel(morfologia);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        gridLayout->addWidget(label_19, 12, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_8 = new QLineEdit(morfologia);
        lineEdit_min_8->setObjectName(QString::fromUtf8("lineEdit_min_8"));
        lineEdit_min_8->setMinimumSize(QSize(100, 0));
        lineEdit_min_8->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_8->setFont(font);
        lineEdit_min_8->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_8, 12, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min = new QLineEdit(morfologia);
        lineEdit_min->setObjectName(QString::fromUtf8("lineEdit_min"));
        lineEdit_min->setMinimumSize(QSize(100, 0));
        lineEdit_min->setMaximumSize(QSize(500, 16777215));
        lineEdit_min->setFont(font);
        lineEdit_min->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min, 5, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_15 = new QLabel(morfologia);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        gridLayout->addWidget(label_15, 8, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_6 = new QLabel(morfologia);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 1, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_2 = new QLineEdit(morfologia);
        lineEdit_stan_2->setObjectName(QString::fromUtf8("lineEdit_stan_2"));
        lineEdit_stan_2->setMinimumSize(QSize(100, 0));
        lineEdit_stan_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_2->setFont(font);
        lineEdit_stan_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_2, 6, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_7 = new QLineEdit(morfologia);
        lineEdit_max_7->setObjectName(QString::fromUtf8("lineEdit_max_7"));
        lineEdit_max_7->setMinimumSize(QSize(100, 0));
        lineEdit_max_7->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_7->setFont(font);
        lineEdit_max_7->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_7, 11, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_leukocyty = new QLineEdit(morfologia);
        lineEdit_leukocyty->setObjectName(QString::fromUtf8("lineEdit_leukocyty"));
        lineEdit_leukocyty->setMinimumSize(QSize(100, 0));
        lineEdit_leukocyty->setMaximumSize(QSize(500, 16777215));
        lineEdit_leukocyty->setFont(font);

        gridLayout->addWidget(lineEdit_leukocyty, 11, 1, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_18 = new QLabel(morfologia);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 11, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_5 = new QLabel(morfologia);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 1, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_26 = new QLabel(morfologia);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font);

        gridLayout->addWidget(label_26, 6, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_2 = new QLineEdit(morfologia);
        lineEdit_max_2->setObjectName(QString::fromUtf8("lineEdit_max_2"));
        lineEdit_max_2->setMinimumSize(QSize(100, 0));
        lineEdit_max_2->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_2->setFont(font);
        lineEdit_max_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_2, 6, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_28 = new QLabel(morfologia);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font);

        gridLayout->addWidget(label_28, 8, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_7 = new QLineEdit(morfologia);
        lineEdit_min_7->setObjectName(QString::fromUtf8("lineEdit_min_7"));
        lineEdit_min_7->setMinimumSize(QSize(100, 0));
        lineEdit_min_7->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_7->setFont(font);
        lineEdit_min_7->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_7, 11, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_5 = new QLineEdit(morfologia);
        lineEdit_min_5->setObjectName(QString::fromUtf8("lineEdit_min_5"));
        lineEdit_min_5->setMinimumSize(QSize(100, 0));
        lineEdit_min_5->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_5->setFont(font);
        lineEdit_min_5->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_5, 9, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_min_11 = new QLineEdit(morfologia);
        lineEdit_min_11->setObjectName(QString::fromUtf8("lineEdit_min_11"));
        lineEdit_min_11->setMinimumSize(QSize(100, 0));
        lineEdit_min_11->setMaximumSize(QSize(500, 16777215));
        lineEdit_min_11->setFont(font);
        lineEdit_min_11->setReadOnly(true);

        gridLayout->addWidget(lineEdit_min_11, 15, 3, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_4 = new QLineEdit(morfologia);
        lineEdit_max_4->setObjectName(QString::fromUtf8("lineEdit_max_4"));
        lineEdit_max_4->setMinimumSize(QSize(100, 0));
        lineEdit_max_4->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_4->setFont(font);
        lineEdit_max_4->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_4, 8, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_2 = new QLabel(morfologia);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_max_10 = new QLineEdit(morfologia);
        lineEdit_max_10->setObjectName(QString::fromUtf8("lineEdit_max_10"));
        lineEdit_max_10->setMinimumSize(QSize(100, 0));
        lineEdit_max_10->setMaximumSize(QSize(500, 16777215));
        lineEdit_max_10->setFont(font);
        lineEdit_max_10->setReadOnly(true);

        gridLayout->addWidget(lineEdit_max_10, 14, 4, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label_30 = new QLabel(morfologia);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font);

        gridLayout->addWidget(label_30, 10, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        label_33 = new QLabel(morfologia);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setFont(font);

        gridLayout->addWidget(label_33, 13, 2, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan_5 = new QLineEdit(morfologia);
        lineEdit_stan_5->setObjectName(QString::fromUtf8("lineEdit_stan_5"));
        lineEdit_stan_5->setMinimumSize(QSize(100, 0));
        lineEdit_stan_5->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan_5->setFont(font);
        lineEdit_stan_5->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan_5, 9, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        lineEdit_stan = new QLineEdit(morfologia);
        lineEdit_stan->setObjectName(QString::fromUtf8("lineEdit_stan"));
        lineEdit_stan->setMinimumSize(QSize(100, 0));
        lineEdit_stan->setMaximumSize(QSize(500, 16777215));
        lineEdit_stan->setFont(font);
        lineEdit_stan->setReadOnly(true);

        gridLayout->addWidget(lineEdit_stan, 5, 6, 1, 2, Qt::AlignHCenter|Qt::AlignVCenter);

        label = new QLabel(morfologia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 5, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(morfologia);

        QMetaObject::connectSlotsByName(morfologia);
    } // setupUi

    void retranslateUi(QDialog *morfologia)
    {
        morfologia->setWindowTitle(QCoreApplication::translate("morfologia", "Morfologia", nullptr));
        label_65->setText(QCoreApplication::translate("morfologia", "Morfologia", nullptr));
        label_10->setText(QCoreApplication::translate("morfologia", "mln/\316\274l", nullptr));
        label_4->setText(QCoreApplication::translate("morfologia", "Jednostka:", nullptr));
        label_34->setText(QCoreApplication::translate("morfologia", "%", nullptr));
        label_->setText(QCoreApplication::translate("morfologia", "Hemoglobina:", nullptr));
        pushButton_wroc->setText(QCoreApplication::translate("morfologia", "Wr\303\263\304\207", nullptr));
        label_22->setText(QCoreApplication::translate("morfologia", "EOS:", nullptr));
        pushButton_sprawdz->setText(QCoreApplication::translate("morfologia", "Sprawd\305\272", nullptr));
        label_23->setText(QCoreApplication::translate("morfologia", "BAS", nullptr));
        label_35->setText(QCoreApplication::translate("morfologia", "%", nullptr));
        label_20->setText(QCoreApplication::translate("morfologia", "Monocyty:", nullptr));
        label_27->setText(QCoreApplication::translate("morfologia", "%", nullptr));
        label_14->setText(QCoreApplication::translate("morfologia", "Hematokryt:", nullptr));
        label_3->setText(QCoreApplication::translate("morfologia", "Warto\305\233\304\207:", nullptr));
        label_21->setText(QCoreApplication::translate("morfologia", "NEU:", nullptr));
        label_17->setText(QCoreApplication::translate("morfologia", "MCHC:", nullptr));
        label_29->setText(QCoreApplication::translate("morfologia", "pg", nullptr));
        label_36->setText(QCoreApplication::translate("morfologia", "%", nullptr));
        label_32->setText(QCoreApplication::translate("morfologia", "%", nullptr));
        label_16->setText(QCoreApplication::translate("morfologia", "MCH:", nullptr));
        label_31->setText(QCoreApplication::translate("morfologia", "tys/\316\274l", nullptr));
        label_7->setText(QCoreApplication::translate("morfologia", "Stan:", nullptr));
        label_19->setText(QCoreApplication::translate("morfologia", "Limfocyty:", nullptr));
        label_15->setText(QCoreApplication::translate("morfologia", "MCV:", nullptr));
        label_6->setText(QCoreApplication::translate("morfologia", "MAX:", nullptr));
        label_18->setText(QCoreApplication::translate("morfologia", "Leukocyty:", nullptr));
        label_5->setText(QCoreApplication::translate("morfologia", "MIN:", nullptr));
        label_26->setText(QCoreApplication::translate("morfologia", "g/dl", nullptr));
        label_28->setText(QCoreApplication::translate("morfologia", "fl", nullptr));
        label_2->setText(QCoreApplication::translate("morfologia", "Nazwa:", nullptr));
        label_30->setText(QCoreApplication::translate("morfologia", "g/dl", nullptr));
        label_33->setText(QCoreApplication::translate("morfologia", "%", nullptr));
        label->setText(QCoreApplication::translate("morfologia", "Erytrocyty:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class morfologia: public Ui_morfologia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORFOLOGIA_H
