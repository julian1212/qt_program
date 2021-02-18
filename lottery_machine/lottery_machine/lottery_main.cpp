#include "lottery_main.h"
#include "ui_lottery_main.h"
#include "QFileDialog"
#include "QDebug"
#include "QMessageBox"
#include "QFile"
#include "lottery_dialog.h"


Lottery_Main::Lottery_Main(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Lottery_Main)
{
    ui->setupUi(this);
//    Qt::WindowFlags flags = 0;
//    flags |= Qt::WindowMinimizeButtonHint;
//    setWindowFlags(flags); // fobid maximum the window
    ui->pushButton2->setDisabled(true);
    QObject::connect(ui->pushButton1,&QPushButton::clicked,this,&Lottery_Main::onPushImport);
    QObject::connect(ui->pushButton2,&QPushButton::clicked,this,&Lottery_Main::onPushLottery);
}

Lottery_Main::~Lottery_Main()
{
    delete ui;
}

void Lottery_Main::onPushImport()
{
//    qDebug()<<"click import pushbutton"<<endl;
//    QString path = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files(*.jpg *.png)"));

    QString path = QFileDialog::getOpenFileName(this,tr("Open txt"),".",tr("Text Files(*.txt)"));
    if(path.length() == 0)
    {
        QMessageBox::information(NULL, tr("Path"), tr("You didn't select any files."));
    }
    else
    {
        QFile file(path);
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            while(!file.atEnd())
            {
                QByteArray line=file.readLine();
                QString str(line);
                ui->textBrowser->append(str.replace(QString("\n"), QString("")));
                m_list.append(str);
            }
            file.close();
            //qDebug()<<m_list.size()<<endl;
            ui->pushButton2->setDisabled(false);
            ui->pushButton1->setDisabled(true);
        }
    }
}
void Lottery_Main::onPushLottery()
{
    //qDebug()<<"click lottery pushbutton"<<endl;
    Lottery_Dialog dlg(m_list);
    //dlg.setDlgList(m_list);
    dlg.show();
    dlg.exec();
}
