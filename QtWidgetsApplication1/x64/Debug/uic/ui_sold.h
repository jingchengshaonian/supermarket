/********************************************************************************
** Form generated from reading UI file 'sold.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLD_H
#define UI_SOLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_soldClass
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *soldClass)
    {
        if (soldClass->objectName().isEmpty())
            soldClass->setObjectName("soldClass");
        soldClass->resize(379, 298);
        centralWidget = new QWidget(soldClass);
        centralWidget->setObjectName("centralWidget");
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(-5, -9, 621, 421));
        listWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 80, 54, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 80, 231, 31));
        label_2->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 220, 90, 41));
        pushButton->setFont(font);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 149, 341, 41));
        soldClass->setCentralWidget(centralWidget);

        retranslateUi(soldClass);

        QMetaObject::connectSlotsByName(soldClass);
    } // setupUi

    void retranslateUi(QMainWindow *soldClass)
    {
        soldClass->setWindowTitle(QCoreApplication::translate("soldClass", "sold", nullptr));
        label->setText(QCoreApplication::translate("soldClass", "\350\264\255\344\271\260", nullptr));
        label_2->setText(QCoreApplication::translate("soldClass", "\344\273\245\357\274\210\346\225\260\345\255\227*\345\220\215\347\247\260+\346\225\260\345\255\227*\345\220\215\347\247\260\357\274\211\347\232\204\346\226\271\345\274\217", nullptr));
        pushButton->setText(QCoreApplication::translate("soldClass", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class soldClass: public Ui_soldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLD_H
