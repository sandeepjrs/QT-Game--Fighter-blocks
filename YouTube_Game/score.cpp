#include "score.h"
#include<qfont.h>

// we are declaring the base class for the SCORE its will take care
//to assign the parrent to our coustom class ie score
Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    //intitiazatioj score to zero

    score=0;

    //draw the text
    setPlainText(QString("Score:  ")+ QString::number(score)); // its like adding two strings
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));//(name of font, size of font)
}

void Score::increaseScore()
{
    score++;
}

int Score::getScore()
{
   return score;
}
