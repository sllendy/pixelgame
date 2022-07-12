#ifndef WORLD_H
#define WORLD_H

#include <QGraphicsItemGroup>
#include <QGraphicsPixmapItem>
#include <QPropertyAnimation>

class World : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
    Q_PROPERTY(qreal x READ x WRITE setX)
public:
    explicit World();

private:
    QGraphicsPixmapItem * house;
    QGraphicsPixmapItem * bush;

signals:

public slots:
};

#endif // WORLD_H
