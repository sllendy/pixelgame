#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
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


signals:
    void moveDown();
    void moveLeft();
    void moveUp();
    void moveRight();

public slots:

protected:
    void keyPressEvent(QKeyEvent *event) override;
};

#endif // SCENE_H
