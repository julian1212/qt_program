#include "lottery_task.h"
#include "QDebug"
#include "QTime"


Lottery_Task::Lottery_Task(QList<QString> x)
{
    thread_list=x;
    m_flag=0;
    random_id=0;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}


void Lottery_Task::run()
{

    while (1) {
        int m_size = thread_list.size();
        if (m_size == 0) break;
        random_id = qrand()%m_size;
        if(m_flag) {emit show_info(random_id);}
        msleep(30);
//        else {
//              emit selected_info(random_id);
//              thread_list.removeAt(random_id);
//        }

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
    emit selected_info(random_id);
    thread_list.removeAt(random_id);
    //qDebug()<<"stop"<<m_flag<<endl;
}


