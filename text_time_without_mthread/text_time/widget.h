#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    virtual void timerEvent(QTimerEvent *event);

private:
    Ui::Widget *ui;
    int m_timer1;   //every timer has only one id, the first timer's id is 1, the second is 2 and so on..
    int m_timer2;
};
#endif // WIDGET_H
