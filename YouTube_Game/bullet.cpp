#include "bullet.h"
#include<QTimer>

Bullet::Bullet()
{
    //drw the rect
    setRect(0,0,10,10);

    //connect
    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


}

void Bullet::move()
{
    //move bulet up
    setPos(x(),y()-10);
    if(pos().y()<50)
    {
        scene()->removeItem(this);
        delete this;
    }
}
