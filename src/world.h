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

    qreal x() const;
    qreal y() const;


private:
    QGraphicsPixmapItem * house;
    QGraphicsPixmapItem * bush;
    QPropertyAnimation * xAnimation;

    qreal m_x;
    qreal m_y;
    int dx = 20;
    int dy = 20;

signals:

public slots:
void setX(qreal x);

void setY(qreal y);

};

#endif // WORLD_H
