#ifndef MYRECT_H
#define MYRECT_H

#include<QGraphicsRectItem>
#include<QObject>

class MyRect : public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    MyRect();
    //this member function[keyPressEvent] will alow to MyRect class to respond the key prss
    void keyPressEvent(QKeyEvent *event);

public slots:
    void spawn();
};

#endif // MYRECT_H
