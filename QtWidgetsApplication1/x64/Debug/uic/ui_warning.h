/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_warningClass
{
public:
    QWidget *centralWidget;
    QLabel *label;

    void setupUi(QMainWindow *warningClass)
    {
        if (warningClass->objectName().isEmpty())
            warningClass->setObjectName("warningClass");
        warningClass->resize(327, 338);
        centralWidget = new QWidget(warningClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 70, 151, 201));
        warningClass->setCentralWidget(centralWidget);

        retranslateUi(warningClass);

        QMetaObject::connectSlotsByName(warningClass);
    } // setupUi

    void retranslateUi(QMainWindow *warningClass)
    {
        warningClass->setWindowTitle(QCoreApplication::translate("warningClass", "warning", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class warningClass: public Ui_warningClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
