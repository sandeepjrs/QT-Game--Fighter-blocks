#include "enemy.h"
#include<QTimer>
#include<QGraphicsItem>
#include<stdlib.h> // rand = really large int

Enemy::Enemy()
{
    int random_number=rand()%700;
    //set random postion
    setPos(random_number,0);

    //drw the rect
    setRect(0,0,50,50);

    //connect
    QTimer *timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);


}

void Enemy::move()
{
    //move enemy down
    setPos(x(),y()+5);
    if(pos().y()+rect().height()>600)
    {
        scene()->removeItem(this);
        delete this;
    }
}
