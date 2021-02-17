#include "lottery_main.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Lottery_Main w;
    w.show();
    return a.exec();
}
