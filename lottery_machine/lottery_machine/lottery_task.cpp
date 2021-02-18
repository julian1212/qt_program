#include "lottery_task.h"
#include "QDebug"
#include "QTime"


Lottery_Task::Lottery_Task(QList<QString> x)
{
    thread_list=x;
    m_flag=0;

}


void Lottery_Task::run()
{
//        for (int i=0;i<thread_list.size();i++)
//        {
//            qDebug()<<thread_list.at(i)<<endl;
//        }

    while (1) {
        if(m_flag){
            qDebug()<<"thread is runing"<<endl;
            msleep(1000);
        }

    }
}



void Lottery_Task::onSignalRun()
{
    m_flag=1;
    //qDebug()<<"run"<<m_flag<<endl;
}

void Lottery_Task::onSignalStop()
{
    m_flag=0;
    //qDebug()<<"stop"<<m_flag<<endl;
}
