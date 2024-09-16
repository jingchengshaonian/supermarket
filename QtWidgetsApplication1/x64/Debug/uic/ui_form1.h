/********************************************************************************
** Form generated from reading UI file 'form1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM1_H
#define UI_FORM1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form1Class
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_11;

    void setupUi(QMainWindow *form1Class)
    {
        if (form1Class->objectName().isEmpty())
            form1Class->setObjectName("form1Class");
        form1Class->resize(288, 321);
        centralWidget = new QWidget(form1Class);
        centralWidget->setObjectName("centralWidget");
        listView = new QListView(centralWidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(-10, 0, 781, 521));
        listView->setAutoFillBackground(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 270, 91, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        pushButton->setFont(font);
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 31, 218, 227));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        horizontalLayout_7->addWidget(label_7);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName("lineEdit_7");

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        horizontalLayout_8->addWidget(label_8);

        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName("lineEdit_8");

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        horizontalLayout_9->addWidget(label_9);

        lineEdit_9 = new QLineEdit(widget);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout_9->addWidget(lineEdit_9);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        horizontalLayout_12->addWidget(label_12);

        lineEdit_12 = new QLineEdit(widget);
        lineEdit_12->setObjectName("lineEdit_12");

        horizontalLayout_12->addWidget(lineEdit_12);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        horizontalLayout_10->addWidget(label_10);

        lineEdit_10 = new QLineEdit(widget);
        lineEdit_10->setObjectName("lineEdit_10");

        horizontalLayout_10->addWidget(lineEdit_10);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        horizontalLayout_11->addWidget(label_11);

        lineEdit_11 = new QLineEdit(widget);
        lineEdit_11->setObjectName("lineEdit_11");

        horizontalLayout_11->addWidget(lineEdit_11);


        verticalLayout->addLayout(horizontalLayout_11);

        form1Class->setCentralWidget(centralWidget);

        retranslateUi(form1Class);

        QMetaObject::connectSlotsByName(form1Class);
    } // setupUi

    void retranslateUi(QMainWindow *form1Class)
    {
        form1Class->setWindowTitle(QCoreApplication::translate("form1Class", "form1", nullptr));
        pushButton->setText(QCoreApplication::translate("form1Class", "\347\241\256  \345\256\232", nullptr));
        label->setText(QCoreApplication::translate("form1Class", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        label_7->setText(QCoreApplication::translate("form1Class", "\346\225\260\351\207\217      ", nullptr));
        label_8->setText(QCoreApplication::translate("form1Class", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        label_9->setText(QCoreApplication::translate("form1Class", "\344\277\235\350\264\250\346\234\237   ", nullptr));
        label_12->setText(QCoreApplication::translate("form1Class", "\345\224\256\344\273\267     ", nullptr));
        label_10->setText(QCoreApplication::translate("form1Class", "\351\242\234\350\211\262      ", nullptr));
        label_11->setText(QCoreApplication::translate("form1Class", "\344\277\235\344\277\256\346\234\237  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form1Class: public Ui_form1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM1_H
