#ifndef BULLET_H
#define BULLET_H
#include<QGraphicsRectItem>
#include<qgraphicsview.h>

/* IMPORTANT RULE ::: any class in which we have a signal and slot that should be derived from the Qobject...
 * ...that us a rule.
 */

class Bullet : public QObject,public QGraphicsRectItem
{
    Q_OBJECT //this is also mandantory add Q_OBJECT macro to work signal and slot

public:
    Bullet();

public slots:
    void move();


};

#endif // BULLET_H
