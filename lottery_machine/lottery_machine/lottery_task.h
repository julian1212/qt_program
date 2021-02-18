#ifndef LOTTERY_TASK_H
#define LOTTERY_TASK_H

#include "QThread"

class Lottery_Task : public QThread
{
    Q_OBJECT
public:
    Lottery_Task(QList<QString>);


protected:
    void run();
    //void stop();
    //void stop();

private:
    QList<QString> thread_list;
    int m_flag;    //run = 1, stop = 0
    int random_id;


signals:
    void selected_info(int);
    void show_info(int);

public slots:
    void onSignalRun();
    void onSignalStop();


};

#endif // LOTTERY_TASK_H
