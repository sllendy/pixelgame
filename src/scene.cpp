#include "scene.h"

Scene::Scene(QObject *parent) : QGraphicsScene(parent)
{
    setUpTimer();
}

void Scene::setUpTimer()
{
    worldTimer = new QTimer(this);
    connect(worldTimer,&QTimer::timeout,[=](){

        World * world = new World();
        addItem(world);

    });

    worldTimer->start(1000);
}
