#include <QApplication>

#include "game.h"


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

Game *game;

int main(int argc, char *argv[])

{

    QApplication a(argc, argv);
    game=new Game();
    game->show();






    return a.exec();
}
