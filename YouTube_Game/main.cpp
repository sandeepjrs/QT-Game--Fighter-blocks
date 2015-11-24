#include <QApplication>
#include<QGraphicsScene>
#include "myrect.h"
#include<QGraphicsView>
#include<qdebug.h>
#include <QScrollBar>
#include<QTimer>

/*
 * prereq
 * -basic knowledge of C++ (pointers and memory mangement*
 *
 * Tutorial 1-Topics:
 * -QGraphicsScene- it like a container which helps pull all inti a single scene.
 * - QgraphicsItem- any thing you want to put into the scene that should be derived from the Qgraphics item or its subclasses.
 * - QgraphicsView-  all above scene jaut a store a scene so to view them we need a graphics view.
 * -
 *
 */


/*
 * Tutorail 2-
 * evennts (keypress() and QkeyEvent)
 * event propagtion system
 * QDebug
 *
 * keypoint even you add the keypress or other event it will not be activated utill you make it focous able item because in a scene there can be
 * many item but we wannt only some of them to respode so the item we want to make it reponse make it focousable
 */

/* Tutorial 4-
 * for important quadrants in QT is-
 * 1. QGraphicsView Cordinate
 * 2. QGraphicsScene cordinates
 * 3. QgraphicsItem Coordinates
 */


int main(int argc, char *argv[])

{

    QApplication a(argc, argv);

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

    // spawn enemies

    QTimer *timer=new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(2000);




    return a.exec();
}
