/********************************************************************************
** Form generated from reading UI file 'label_3.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABEL_3_H
#define UI_LABEL_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_label_3Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *label_3Class)
    {
        if (label_3Class->objectName().isEmpty())
            label_3Class->setObjectName(QString::fromUtf8("label_3Class"));
        label_3Class->resize(600, 400);
        menuBar = new QMenuBar(label_3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        label_3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(label_3Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        label_3Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(label_3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_3Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(label_3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        label_3Class->setStatusBar(statusBar);

        retranslateUi(label_3Class);

        QMetaObject::connectSlotsByName(label_3Class);
    } // setupUi

    void retranslateUi(QMainWindow *label_3Class)
    {
        label_3Class->setWindowTitle(QCoreApplication::translate("label_3Class", "label_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class label_3Class: public Ui_label_3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABEL_3_H
