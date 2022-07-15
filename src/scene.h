#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsScene>
#include <QTimer>
#include "world.h"

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Scene(QObject *parent = 0);

private:
    void setUpTimer();

    QTimer * worldTimer;

signals:

public slots:
};

#endif // SCENE_H
