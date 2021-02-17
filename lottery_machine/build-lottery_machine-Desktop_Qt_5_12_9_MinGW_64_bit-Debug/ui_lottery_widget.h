/********************************************************************************
** Form generated from reading UI file 'lottery_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTTERY_WIDGET_H
#define UI_LOTTERY_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lottery_Widget
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Lottery_Widget)
    {
        if (Lottery_Widget->objectName().isEmpty())
            Lottery_Widget->setObjectName(QString::fromUtf8("Lottery_Widget"));
        Lottery_Widget->resize(446, 132);
        pushButton = new QPushButton(Lottery_Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 10, 61, 111));
        textBrowser = new QTextBrowser(Lottery_Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(330, 10, 101, 111));
        lineEdit = new QLineEdit(Lottery_Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 241, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Narrow"));
        font.setPointSize(26);
        lineEdit->setFont(font);

        retranslateUi(Lottery_Widget);

        QMetaObject::connectSlotsByName(Lottery_Widget);
    } // setupUi

    void retranslateUi(QWidget *Lottery_Widget)
    {
        Lottery_Widget->setWindowTitle(QApplication::translate("Lottery_Widget", "Form", nullptr));
        pushButton->setText(QApplication::translate("Lottery_Widget", "START", nullptr));
        textBrowser->setHtml(QApplication::translate("Lottery_Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Lottery_Widget: public Ui_Lottery_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTTERY_WIDGET_H
