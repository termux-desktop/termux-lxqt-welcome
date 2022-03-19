#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator T;
    T.load(":/spanish.qm");
    MainWindow w;
    w.show();
    return a.exec();
}