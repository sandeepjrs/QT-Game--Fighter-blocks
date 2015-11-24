#include "myrect.h"
#include"enemy.h"
#include<QKeyEvent>
#include<bullet.h>
#include<QDebug>
#include<QGraphicsScene>



MyRect::MyRect()
{
    setRect(10,10,30,30);
    //setRect(0,0,10,10);
}

void MyRect::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left)
    {
        if(pos().x()>0)
        {
        setPos(x()-10,y());
        //MyRect *myrect= new MyRect;
        //scene()->addItem(myrect);
        }
    }

    else if(event->key()==Qt::Key_Right)
    {
        if(pos().x()+rect().width()<800)
        {
        setPos(x()+10,y());
        }
    }


    else if(event->key()==Qt::Key_Space)
    {
        //create a bullet
        Bullet *bullet=new Bullet();
        //qDebug()<<" ypu created bullet object but not added to the sceene ";
        bullet->setPos(x(),y());
        scene()->addItem(bullet);

    }
}

void MyRect::spawn()
{
    //create a enemey
    Enemy *enemy=new Enemy();
    scene()->addItem(enemy);


}

