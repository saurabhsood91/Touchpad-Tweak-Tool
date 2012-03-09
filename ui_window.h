/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialogCheckBox
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QDialog *dialogCheckBox)
    {
        if (dialogCheckBox->objectName().isEmpty())
            dialogCheckBox->setObjectName(QString::fromUtf8("dialogCheckBox"));
        dialogCheckBox->resize(270, 121);
        horizontalLayoutWidget = new QWidget(dialogCheckBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 20, 151, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(dialogCheckBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 80, 60, 23));
        horizontalLayoutWidget->raise();
        pushButton->raise();

        retranslateUi(dialogCheckBox);

        QMetaObject::connectSlotsByName(dialogCheckBox);
    } // setupUi

    void retranslateUi(QDialog *dialogCheckBox)
    {
        dialogCheckBox->setWindowTitle(QApplication::translate("dialogCheckBox", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dialogCheckBox", "Enable Touchpad", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QString());
        pushButton->setText(QApplication::translate("dialogCheckBox", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dialogCheckBox: public Ui_dialogCheckBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
