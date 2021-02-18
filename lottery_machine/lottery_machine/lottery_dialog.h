#ifndef LOTTERY_DIALOG_H
#define LOTTERY_DIALOG_H

#include <QDialog>
#include "lottery_task.h"

namespace Ui {
class Lottery_Dialog;
}

class Lottery_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Lottery_Dialog(QList<QString>,QWidget *parent = nullptr);
    //Lottery_Dialog(QList<QString> x);
    ~Lottery_Dialog();
    //void setDlgList(QList<QString>);
protected:
    //virtual void closeEvent(QCloseEvent *) override;

private:
    Ui::Lottery_Dialog *ui;
    bool isStop;   //0:start/green  1:stop/red.   runing while the isStop is true.
    QList<QString> dlg_list;
    QList<QString> result_list;
    Lottery_Task *m_task;

public slots:
    void onClickBtn();
    void updateList(QString);

signals:
    void signal_stop();
    void signal_run();

};

#endif // LOTTERY_DIALOG_H
