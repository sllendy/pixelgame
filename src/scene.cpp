#include "scene.h"
#include <QKeyEvent>
#include <QDebug>

Scene::Scene(QObject *parent) : QGraphicsScene(parent)
{
    character = new mainCharacter(QPixmap(":/sprite1.png"));
    world = new World();
    world_bg = new QGraphicsPixmapItem(QPixmap(":/bg.png"));
    addItem(world_bg);
    world_bg->setPos(QPointF(0,0) - QPointF(world_bg->boundingRect().width()/2,
                                            world_bg->boundingRect().height()/2));
    addItem(world);
    character->setPos(QPointF(0,0) + QPointF(world->boundingRect().width()/2,
                                              world->boundingRect().height()/2));
    addItem(character);


}

void Scene::moveUp()
{
    world_bg->setPos(world_bg->pos().x(), world_bg->pos().y()+dy);
}

void Scene::moveDown()
{
    world_bg->setPos(world_bg->pos().x(), world_bg->pos().y()-dy);
}

void Scene::moveLeft()
{
    world_bg->setPos(world_bg->pos().x()+dx, world_bg->pos().y());
}

void Scene::moveRight()
{
    world_bg->setPos(world_bg->pos().x()-dx, world_bg->pos().y());
}

