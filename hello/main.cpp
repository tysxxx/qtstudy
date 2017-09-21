#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QApplication::addLibraryPath("./images");
    a.setWindowIcon(QIcon("flower.ico"));
    return a.exec();
}
