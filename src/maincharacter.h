#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPropertyAnimation>

class mainCharacter : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit mainCharacter(QPixmap pixmap);
    enum characterDir{
        D1,
        D2,
        D3,
        D4,
        L1,
        L2,
        L3,
        L4,
        U1,
        U2,
        U3,
        U4,
        R1,
        R2,
        R3,
        R4
    };


private:

    void updatePixmap();
    characterDir characterDirection;


signals:

public slots:
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

};

#endif // MAINCHARACTER_H
