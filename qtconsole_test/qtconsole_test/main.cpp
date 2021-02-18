#include <QCoreApplication>
#include <iostream>
#include "QTime"
#include "QDebug"

class Shape
{
    protected:
        int width;
        int height;
    public:
        void setWidth(int w)
        {
            width=w;
        }
        void setHeight(int h)
        {
            height=h;
        }

};

class Rectangle:public Shape
{
    public:
        int getArea()
        {
            return (width*height);
        }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    using namespace std;
//    Rectangle Rect;
//    Rect.setWidth(5);
//    Rect.setHeight(7);
//    cout<<"Total area:"<<Rect.getArea()<<endl;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    for(int i=0; i<100; i++)
    {
        int test =qrand()%20;
        qDebug()<<test;
    }


    return a.exec();
}


