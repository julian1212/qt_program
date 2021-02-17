#include "lottery_widget.h"
#include "ui_lottery_widget.h"
#include "windows.h"

Lottery_Widget::Lottery_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lottery_Widget)
{
    ui->setupUi(this);

}

Lottery_Widget::~Lottery_Widget()
{
    Sleep(3000);
    delete ui;
}
