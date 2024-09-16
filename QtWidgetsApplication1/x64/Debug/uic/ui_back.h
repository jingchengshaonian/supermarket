/********************************************************************************
** Form generated from reading UI file 'back.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACK_H
#define UI_BACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_backClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;

    void setupUi(QMainWindow *backClass)
    {
        if (backClass->objectName().isEmpty())
            backClass->setObjectName("backClass");
        backClass->resize(284, 239);
        centralWidget = new QWidget(backClass);
        centralWidget->setObjectName("centralWidget");
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 180, 91, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pushButton->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 60, 257, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 110, 257, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget_2);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);

        backClass->setCentralWidget(centralWidget);

        retranslateUi(backClass);

        QMetaObject::connectSlotsByName(backClass);
    } // setupUi

    void retranslateUi(QMainWindow *backClass)
    {
        backClass->setWindowTitle(QCoreApplication::translate("backClass", "back", nullptr));
        pushButton->setText(QCoreApplication::translate("backClass", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("backClass", "\350\256\242\345\215\225\347\232\204ID\345\217\267\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("backClass", "\351\200\200\346\254\276\345\216\237\345\233\240\357\274\232    ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class backClass: public Ui_backClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACK_H
