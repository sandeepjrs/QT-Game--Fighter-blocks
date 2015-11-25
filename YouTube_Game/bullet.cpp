#include "bullet.h"
#include<QTimer>
#include<QList>
#include"enemy.h"
#include<typeinfo>
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
    /*if bullets collids with enmy then destroy both
      but how do we check??
      so every member function of the graphicViewScene have a colliding
      function....so they make a Qlist when they colllid with each other
      */

    // collidig items() will provide the pointer to the colliding items
    //<graphiscItem *> it says that collidimg item is a pointer of graphicsitem

    QList<QGraphicsItem *> colliding_Items= collidingItems();
      for(int i=0,n=colliding_Items.size();i<n;++i)
    {
        if(typeid(*(colliding_Items[i]))==typeid(Enemy))
        {
            //remove bullet+colliding item
            scene()->removeItem(colliding_Items[i]);
            scene()->removeItem(this);
            //its taking memory in the heap so delete the meomry

            delete colliding_Items[i];
            delete this;
            return;
        }
    }

    //move bulet up
    setPos(x(),y()-10);
    if(pos().y()<50)
    {
        scene()->removeItem(this);
        delete this;
    }
}
