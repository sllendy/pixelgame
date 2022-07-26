#include "world.h"
#include <QRandomGenerator>
#include <QGraphicsScene>
#include <QDebug>
#include <scene.h>

World::World() :
    house(new QGraphicsPixmapItem(QPixmap(":/house.png"))),
    bush(new QGraphicsPixmapItem(QPixmap(":/bush.png")))
{
    house->setPos(QPointF(0.0,0.0) - QPointF(house->boundingRect().width()/2,
                                             house->boundingRect().height()/2));
    qreal scale = 0.1;
    bush->setScale(scale);
    bush->setPos(QPointF(0,0) - QPointF(bush->boundingRect().width()*scale/2 + house->boundingRect().width()/2,
                                     bush->boundingRect().height()*scale/2 - house->boundingRect().height()/2));

    addToGroup(house);
    addToGroup(bush);


}

World::~World()
{

}

void World::moveUp()
{

}

void World::moveDown()
{

}

void World::moveLeft()
{

}

void World::moveRight()
{

}
