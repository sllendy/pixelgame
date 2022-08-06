#include "scene.h"
#include "maincharacter.h"
#include <QKeyEvent>
#include <QDebug>

Scene::Scene(QObject *parent) : QGraphicsScene(parent)
{
    character = new mainCharacter(QPixmap(":/assets/D1.png"));
    world = new World();
    world_bg = new QGraphicsPixmapItem(QPixmap(":/assets/bg.png"));
    addItem(world_bg);
    world_bg->setPos(QPointF(0,0) - QPointF(world_bg->boundingRect().width()/2,
                                            world_bg->boundingRect().height()/2));
    world->setPos(QPointF(-300, 0));
    addItem(world);
    character->setPos(QPointF(0,0) - QPointF(character->boundingRect().width()/2,
                                             character->boundingRect().height()/2));
    addItem(character);

    connect(this, &Scene::moveUpSig, world, &World::moveUp);
    connect(this, &Scene::moveDownSig, world, &World::moveDown);
    connect(this, &Scene::moveLeftSig, world, &World::moveLeft);
    connect(this, &Scene::moveRightSig, world, &World::moveRight);

    connect(this, &Scene::moveUpSig, character, &mainCharacter::moveUp);
    connect(this, &Scene::moveDownSig, character, &mainCharacter::moveDown);
    connect(this, &Scene::moveLeftSig, character, &mainCharacter::moveLeft);
    connect(this, &Scene::moveRightSig, character, &mainCharacter::moveRight);


}

void Scene::moveUp()
{
    world_bg->setPos(world_bg->pos().x(), world_bg->pos().y()+dy);
    emit moveUpSig();
}

void Scene::moveDown()
{
    world_bg->setPos(world_bg->pos().x(), world_bg->pos().y()-dy);
    emit moveDownSig();
}

void Scene::moveLeft()
{
    world_bg->setPos(world_bg->pos().x()+dx, world_bg->pos().y());
    emit moveLeftSig();
}

void Scene::moveRight()
{
    world_bg->setPos(world_bg->pos().x()-dx, world_bg->pos().y());
    emit moveRightSig();
}

