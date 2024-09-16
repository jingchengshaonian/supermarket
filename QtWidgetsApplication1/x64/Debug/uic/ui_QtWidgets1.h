/********************************************************************************
** Form generated from reading UI file 'QtWidgets1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETS1_H
#define UI_QTWIDGETS1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgets1Class
{
public:
    QWidget *centralWidget;
    QListView *listView;
    QLineEdit *lineEdit;
    QListView *listView_2;
    QListView *listView_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QTableWidget *tableWidget_2;
    QListView *listView_4;
    QPushButton *pushButton_9;
    QTextEdit *textEdit;
    QPushButton *pushButton_10;

    void setupUi(QMainWindow *QtWidgets1Class)
    {
        if (QtWidgets1Class->objectName().isEmpty())
            QtWidgets1Class->setObjectName("QtWidgets1Class");
        QtWidgets1Class->resize(801, 553);
        centralWidget = new QWidget(QtWidgets1Class);
        centralWidget->setObjectName("centralWidget");
        listView = new QListView(centralWidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(0, -10, 801, 561));
        listView->setAutoFillBackground(true);
        listView->setStyleSheet(QString::fromUtf8("background-image: url(:/images/supermarket);"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(230, 0, 301, 51));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);"));
        lineEdit->setCursorPosition(8);
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        listView_2 = new QListView(centralWidget);
        listView_2->setObjectName("listView_2");
        listView_2->setGeometry(QRect(130, 50, 491, 61));
        listView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        listView_3 = new QListView(centralWidget);
        listView_3->setObjectName("listView_3");
        listView_3->setGeometry(QRect(650, 110, 111, 241));
        listView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 60, 91, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 60, 91, 41));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 60, 91, 41));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(660, 130, 91, 41));
        pushButton_5->setFont(font1);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(660, 180, 91, 41));
        pushButton_6->setFont(font1);
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(660, 240, 91, 41));
        pushButton_7->setFont(font1);
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(660, 290, 91, 41));
        pushButton_8->setFont(font1);
        tableWidget_2 = new QTableWidget(centralWidget);
        if (tableWidget_2->columnCount() < 7)
            tableWidget_2->setColumnCount(7);
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_2->rowCount() < 6)
            tableWidget_2->setRowCount(6);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(120, 120, 521, 321));
        listView_4 = new QListView(centralWidget);
        listView_4->setObjectName("listView_4");
        listView_4->setGeometry(QRect(210, 470, 331, 61));
        listView_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(230, 480, 91, 41));
        pushButton_9->setFont(font1);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(380, 480, 104, 41));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setEnabled(true);
        pushButton_10->setGeometry(QRect(140, 60, 91, 41));
        pushButton_10->setFont(font1);
        QtWidgets1Class->setCentralWidget(centralWidget);

        retranslateUi(QtWidgets1Class);

        QMetaObject::connectSlotsByName(QtWidgets1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtWidgets1Class)
    {
        QtWidgets1Class->setWindowTitle(QCoreApplication::translate("QtWidgets1Class", "QtWidgets1", nullptr));
        lineEdit->setText(QCoreApplication::translate("QtWidgets1Class", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QtWidgets1Class", "\345\242\236\345\212\240\345\225\206\345\223\201", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QtWidgets1Class", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        pushButton_4->setText(QCoreApplication::translate("QtWidgets1Class", "\345\233\276\347\211\207\346\211\253\346\217\217", nullptr));
        pushButton_5->setText(QCoreApplication::translate("QtWidgets1Class", "\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        pushButton_6->setText(QCoreApplication::translate("QtWidgets1Class", "\345\215\226\345\207\272\345\225\206\345\223\201", nullptr));
        pushButton_7->setText(QCoreApplication::translate("QtWidgets1Class", "\351\200\200\345\233\236\345\225\206\345\223\201", nullptr));
        pushButton_8->setText(QCoreApplication::translate("QtWidgets1Class", "\344\277\235\345\255\230\344\277\241\346\201\257", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QtWidgets1Class", "\345\225\206\345\223\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QtWidgets1Class", "\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QtWidgets1Class", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QtWidgets1Class", "\344\277\235\350\264\250\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QtWidgets1Class", "\345\224\256\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QtWidgets1Class", "\351\242\234\350\211\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("QtWidgets1Class", "\344\277\235\344\277\256\346\234\237", nullptr));
        pushButton_9->setText(QCoreApplication::translate("QtWidgets1Class", "\350\256\241\347\256\227\350\220\245\344\270\232\351\242\235", nullptr));
        textEdit->setHtml(QCoreApplication::translate("QtWidgets1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">+56.10</span></p></body></html>", nullptr));
        pushButton_10->setText(QCoreApplication::translate("QtWidgets1Class", "\345\210\235\345\247\213\345\214\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgets1Class: public Ui_QtWidgets1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETS1_H
