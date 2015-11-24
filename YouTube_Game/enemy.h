#ifndef ENEMY_H
#define ENEMY_H

#include<QGraphicsRectItem>
#include<qgraphicsview.h>

/* IMPORTANT RULE ::: any class in which we have a signal and slot that should be derived from the Qobject...
 * ...that us a rule.
 */

class Enemy : public QObject,public QGraphicsRectItem
{
    Q_OBJECT //this is also mandantory add Q_OBJECT macro to work signal and slot

public:
    Enemy();

public slots:
    void move();


};

#endif // ENEMY_H
