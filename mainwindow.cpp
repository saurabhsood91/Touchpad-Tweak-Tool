#include "mainwindow.h"

mainwindow::mainwindow()
{
    setupUi(this);
    this->setWindowTitle("Touchpad Enable");
    this->show();
    QObject::connect(pushButton,SIGNAL(clicked()),this,SLOT(editFile()));
}

void mainwindow::editFile()
{
    if(checkBox->checkState()==Qt::Checked)
    {
        system("echo \"synclient TapButton1=1\">> ~/.bashrc");
        system("synclient TapButton1=1");
    }
    else
    {
        system("echo \"synclient TapButton1=0\">> ~/.bashrc");
        system("synclient TapButton1=0");
    }
}
