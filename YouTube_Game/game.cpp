#include "game.h"


Game::Game(QWidget *parent)
{
    //create a scene
    QGraphicsScene * scene= new QGraphicsScene();

    // create a item to put into the scene
    MyRect *player= new MyRect();
    player->setRect(0,0,50,50);

    //add item to the scene

    scene->addItem(player);

    //***********to create the item focousable**********

    //make a rect focouble

    //step-1
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    //stp-2
    player->setFocus();




    //add view

    QGraphicsView *view=new QGraphicsView(scene);
    //view->setScene(scene);// alternative way- we already added in the constructer so we do not need this

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    player->setPos(view->width()/2,view->height()-player->rect().height());


    //create a score

    score= new Score;
    scene->addItem(score);


    // spawn enemies

    QTimer *timer=new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);
}
