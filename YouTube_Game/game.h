#ifndef GAME_H
#define GAME_H

#include<QGraphicsScene>
#include "myrect.h"
#include<QGraphicsView>
#include<qdebug.h>
#include <QScrollBar>
#include<QTimer>
#include "score.h"

class Game :public QGraphicsView
{
public:
    Game(QWidget * parent=0);

    QGraphicsScene *scene;
    MyRect *player;
    Score *score;
};

#endif // GAME_H
