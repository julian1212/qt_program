#include "lottery_dialog.h"
#include "ui_lottery_dialog.h"
#include "QDebug"
#include "lottery_task.h"
#include "QMessageBox"

Lottery_Dialog::Lottery_Dialog(QList<QString> x,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lottery_Dialog)

{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,&QPushButton::clicked,this,&Lottery_Dialog::onClickBtn);
    ui->label->setStyleSheet("QLabel{background-color:rgb(192,192,192);}");
    ui->pushButton->setStyleSheet("background: rgb(0,255,0)");
    isStop=false;
    dlg_list = x;
    m_task = new Lottery_Task(dlg_list);
    QObject::connect(this,&Lottery_Dialog::signal_run,m_task,&Lottery_Task::onSignalRun);
    QObject::connect(this,&Lottery_Dialog::signal_stop,m_task,&Lottery_Task::onSignalStop);

    m_task->start();
}

Lottery_Dialog::~Lottery_Dialog()
{
    m_task->requestInterruption();
    m_task->quit();
    //m_task->wait();
    delete ui;
}

//void Lottery_Dialog::closeEvent(QCloseEvent *ev)
//{
//    qDebug()<<"exit"<<endl;
//    m_task->requestInterruption();
//    m_task->quit();
//    m_task->wait();
//}


//void Lottery_Dialog::setDlgList(QList<QString> x)
//{
//    dlg_list = x;
//    m_task = new Lottery_Task(dlg_list);

//}

void Lottery_Dialog::onClickBtn()
{
    isStop=!isStop;
    if(isStop){
        ui->pushButton->setStyleSheet("background: rgb(255,0,0)");   //start lottery
        ui->pushButton->setText("STOP");
        emit signal_run();

    }
    else {
        ui->pushButton->setStyleSheet("background: rgb(0,255,0)");   //stop lottery
        ui->pushButton->setText("RUN");
        emit signal_stop();
    }
}

void Lottery_Dialog::updateList(QString q)
{
    qDebug()<<q<<endl;
}
