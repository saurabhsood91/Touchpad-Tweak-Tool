#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ui_window.h"
#include<QDialog>

class mainwindow : public QDialog, Ui::dialogCheckBox
{
    Q_OBJECT
public:
    mainwindow();
public slots:
    void editFile();
};

#endif // MAINWINDOW_H
