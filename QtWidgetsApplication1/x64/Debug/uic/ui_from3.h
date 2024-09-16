/********************************************************************************
** Form generated from reading UI file 'from3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FROM3_H
#define UI_FROM3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_from3Class
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QListWidget *listWidget;

    void setupUi(QMainWindow *from3Class)
    {
        if (from3Class->objectName().isEmpty())
            from3Class->setObjectName("from3Class");
        from3Class->resize(174, 218);
        centralWidget = new QWidget(from3Class);
        centralWidget->setObjectName("centralWidget");
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(21, 70, 132, 40));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(21, 21, 133, 25));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 130, 132, 30));
        pushButton->setFont(font);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(-10, -30, 441, 301));
        from3Class->setCentralWidget(centralWidget);
        listWidget->raise();
        lineEdit->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(from3Class);

        QMetaObject::connectSlotsByName(from3Class);
    } // setupUi

    void retranslateUi(QMainWindow *from3Class)
    {
        from3Class->setWindowTitle(QCoreApplication::translate("from3Class", "from3", nullptr));
        label->setText(QCoreApplication::translate("from3Class", "\350\246\201\345\210\240\351\231\244\347\232\204\345\225\206\345\223\201\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("from3Class", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class from3Class: public Ui_from3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FROM3_H
