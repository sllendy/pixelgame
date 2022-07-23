#include "scene.h"
#include <QKeyEvent>
#include <QDebug>

Scene::Scene(QObject *parent) : QGraphicsScene(parent)
{
    character = new mainCharacter(QPixmap(":/sprite1.png"));
    world = new World();
    QGraphicsPixmapItem *world_bg = new QGraphicsPixmapItem(QPixmap(":/bg.png"));
    addItem(world_bg);
    world_bg->setPos(QPointF(0,0) - QPointF(world_bg->boundingRect().width()/2,
                                            world_bg->boundingRect().height()/2));
    addItem(world);
    character->setPos(QPointF(0,0) + QPointF(world->boundingRect().width()/2,
                                              world->boundingRect().height()/2));
    addItem(character);


}

void Scene::keyPressEvent(QKeyEvent *event)
{
    if (event->key()  == Qt::Key_W)
    {
        qDebug() << "W Pressed";
        emit moveUp();
        QGraphicsScene::keyPressEvent(event);
    }

    if (event->key() == Qt::Key_A)
    {
        emit moveLeft();
    }

    if (event->key() == Qt::Key_S)
    {
        emit moveDown();
    }

    if (event->key() == Qt::Key_D)
    {
        emit moveRight();
    }
}

