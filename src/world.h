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
    ~World();

    qreal x() const;

private:
    QGraphicsPixmapItem * house;
    QGraphicsPixmapItem * bush;
    QPropertyAnimation * xAnimation;

    qreal m_x;
    int yPos;

signals:

public slots:
void setX(qreal x);

};

#endif // WORLD_H
