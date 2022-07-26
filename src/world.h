#ifndef WORLD_H
#define WORLD_H

#include <QGraphicsItemGroup>
#include <QGraphicsPixmapItem>
#include <QPropertyAnimation>
#include <QKeyEvent>

class World : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
    Q_PROPERTY(qreal x READ x WRITE setX)
    Q_PROPERTY(qreal y READ y WRITE setY)

public:
    explicit World();
    ~World();


private:
    QGraphicsPixmapItem * house;
    QGraphicsPixmapItem * bush;
    QPropertyAnimation * xAnimation;

    int dx = 20;
    int dy = 20;

signals:

public slots:
void moveUp();
void moveDown();
void moveLeft();
void moveRight();

};

#endif // WORLD_H
