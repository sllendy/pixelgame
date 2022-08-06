#include "world.h"
#include <QRandomGenerator>
#include <QGraphicsScene>
#include <QDebug>
#include <scene.h>

World::World() :
    house(new QGraphicsPixmapItem(QPixmap(":/assets/house.png"))),
    bush(new QGraphicsPixmapItem(QPixmap(":/assets/bush.png")))
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
    setPos(pos().x(), pos().y() + dy);
}

void World::moveDown()
{
    setPos(pos().x(), pos().y() - dy);
}

void World::moveLeft()
{
    setPos(pos().x() + dx, pos().y());
}

void World::moveRight()
{
    setPos(pos().x() - dx, pos().y());
}
