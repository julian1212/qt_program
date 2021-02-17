#ifndef LOTTERY_MAIN_H
#define LOTTERY_MAIN_H

#include <QMainWindow>
#include "QList"

QT_BEGIN_NAMESPACE
namespace Ui { class Lottery_Main; }
QT_END_NAMESPACE

class Lottery_Main : public QMainWindow
{
    Q_OBJECT

public:
    Lottery_Main(QWidget *parent = nullptr);
    ~Lottery_Main();

private:
    Ui::Lottery_Main *ui;
    QList<QString> m_list;

public slots:
    void onPushImport();
    void onPushLottery();
};
#endif // LOTTERY_MAIN_H
