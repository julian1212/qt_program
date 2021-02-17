/********************************************************************************
** Form generated from reading UI file 'lottery_main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTTERY_MAIN_H
#define UI_LOTTERY_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lottery_Main
{
public:
    QAction *actionImport;
    QWidget *centralwidget;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuFiles_F;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Lottery_Main)
    {
        if (Lottery_Main->objectName().isEmpty())
            Lottery_Main->setObjectName(QString::fromUtf8("Lottery_Main"));
        Lottery_Main->resize(330, 494);
        actionImport = new QAction(Lottery_Main);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        centralwidget = new QWidget(Lottery_Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        pushButton1->setGeometry(QRect(20, 10, 141, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(8);
        pushButton1->setFont(font);
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(170, 10, 141, 31));
        pushButton2->setFont(font);
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 60, 291, 381));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        textBrowser->setFont(font1);
        Lottery_Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Lottery_Main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 330, 26));
        menuFiles_F = new QMenu(menubar);
        menuFiles_F->setObjectName(QString::fromUtf8("menuFiles_F"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Lottery_Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Lottery_Main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Lottery_Main->setStatusBar(statusbar);

        menubar->addAction(menuFiles_F->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFiles_F->addAction(actionImport);

        retranslateUi(Lottery_Main);

        QMetaObject::connectSlotsByName(Lottery_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Lottery_Main)
    {
        Lottery_Main->setWindowTitle(QApplication::translate("Lottery_Main", "Lottery_Main", nullptr));
        actionImport->setText(QApplication::translate("Lottery_Main", "Restart", nullptr));
        pushButton1->setText(QApplication::translate("Lottery_Main", "Import Imformation", nullptr));
        pushButton2->setText(QApplication::translate("Lottery_Main", "Enter Lottey", nullptr));
        textBrowser->setHtml(QApplication::translate("Lottery_Main", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
        menuFiles_F->setTitle(QApplication::translate("Lottery_Main", "Files", nullptr));
        menuAbout->setTitle(QApplication::translate("Lottery_Main", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lottery_Main: public Ui_Lottery_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTTERY_MAIN_H
