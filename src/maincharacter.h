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
        L1,
        L2,
        U1,
        U2,
        R1,
        R2
    };


private:

    void updatePixmap(characterDir characterDir_in);
    characterDir characterDirection;


signals:

public slots:

};

#endif // MAINCHARACTER_H
