#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <QGraphicsItemGroup>
#include <QGraphicsPixmapItem>

class mainCharacter : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
public:
    explicit mainCharacter();

private:


signals:

public slots:
};

#endif // MAINCHARACTER_H
