#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(500,350);
    w.setWindowTitle("Project_01");
    w.show();
    return a.exec();
}
