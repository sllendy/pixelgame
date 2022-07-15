#include "world.h"
#include <QRandomGenerator>
#include <QGraphicsScene>
#include <QDebug>

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


    yPos = QRandomGenerator::global()->bounded(-100, 100);
    int xRandomizer = QRandomGenerator::global()->bounded(200);

    setPos(QPointF(500,0) + QPointF(xRandomizer, yPos));

    xAnimation = new QPropertyAnimation(this, "x", this);
    xAnimation->setStartValue(200 + xRandomizer);
    xAnimation->setEndValue(-200);
    xAnimation->setEasingCurve(QEasingCurve::Linear);
    xAnimation->setDuration(1500);
    connect(xAnimation, &QPropertyAnimation::finished, [=](){
        scene()->removeItem(this);
        delete this;
    });
    xAnimation->start();

}

World::~World()
{

}

qreal World::x() const
{
    return m_x;
}

void World::setX(qreal x)
{
    m_x = x;
    setPos(QPointF(0,0) + QPointF(x, yPos));
}
