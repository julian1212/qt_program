#include "widget.h"
#include "ui_widget.h"
#include "QTime"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_timer1=startTimer(2000);
    m_timer2=startTimer(1000);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerEvent(QTimerEvent *event)
{
    //qDebug() << event->timerId() <<endl;
    if (event->timerId() == 2)
    {
        QTime now =QTime::currentTime();
        QString text=now.toString("HH:mm:ss");
        ui->label1->setText(text);
    }

}
