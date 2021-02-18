/********************************************************************************
** Form generated from reading UI file 'lottery_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTTERY_DIALOG_H
#define UI_LOTTERY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Lottery_Dialog
{
public:
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QDialog *Lottery_Dialog)
    {
        if (Lottery_Dialog->objectName().isEmpty())
            Lottery_Dialog->setObjectName(QString::fromUtf8("Lottery_Dialog"));
        Lottery_Dialog->resize(678, 187);
        pushButton = new QPushButton(Lottery_Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 10, 51, 161));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Narrow"));
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        textEdit = new QTextEdit(Lottery_Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(530, 10, 131, 161));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial Narrow"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        textEdit->setFont(font1);
        label = new QLabel(Lottery_Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 15, 441, 151));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial Narrow"));
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setTextFormat(Qt::AutoText);

        retranslateUi(Lottery_Dialog);

        QMetaObject::connectSlotsByName(Lottery_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Lottery_Dialog)
    {
        Lottery_Dialog->setWindowTitle(QApplication::translate("Lottery_Dialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Lottery_Dialog", "RUN", nullptr));
        textEdit->setHtml(QApplication::translate("Lottery_Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial Narrow'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Lottery_Dialog: public Ui_Lottery_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTTERY_DIALOG_H
