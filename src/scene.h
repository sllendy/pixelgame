#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "world.h"
#include "maincharacter.h"

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Scene(QObject *parent = 0);

private:

    mainCharacter * character;
    World * world;
    QGraphicsPixmapItem *world_bg;

    int dy = 20;
    int dx = 20;


public slots:
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

};

#endif // SCENE_H
