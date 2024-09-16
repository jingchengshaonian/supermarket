/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formClass
{
public:
    QWidget *centralWidget;
    QListView *listView_2;
    QTextEdit *textEdit_2;

    void setupUi(QMainWindow *formClass)
    {
        if (formClass->objectName().isEmpty())
            formClass->setObjectName("formClass");
        formClass->resize(414, 321);
        centralWidget = new QWidget(formClass);
        centralWidget->setObjectName("centralWidget");
        listView_2 = new QListView(centralWidget);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(10, 20, 241, 291));
        listView_2->setAutoFillBackground(false);
        listView_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/apple);"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(260, 80, 141, 121));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        textEdit_2->setFont(font);
        formClass->setCentralWidget(centralWidget);

        retranslateUi(formClass);

        QMetaObject::connectSlotsByName(formClass);
    } // setupUi

    void retranslateUi(QMainWindow *formClass)
    {
        formClass->setWindowTitle(QCoreApplication::translate("formClass", "form", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("formClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:10pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232\350\213\271\346\236\234</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\347\224\237\344\272\247\345\234\260\357\274\232\347\246\217\345\273\272\345\216\246\351\227\250</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\224\256\344\273\267\357\274\2323.10\345\205\203</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formClass: public Ui_formClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
