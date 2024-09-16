#include "QtWidgets1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtWidgets1 w;
    w.setWindowTitle("XMUMarket");
    //form m;
    //m.show();
    w.show();
    return a.exec();
}
