#include<QApplication>
#include "mainwindow.h"

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    mainwindow m;
    return app.exec();
}
