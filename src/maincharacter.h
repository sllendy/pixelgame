#ifndef MAINCHARACTER_H
#define MAINCHARACTER_H

#include <QObject>
#include <QGraphicsPixmapItem>

class mainCharacter : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit mainCharacter(QPixmap pixmap);

private:


signals:

public slots:
};

#endif // MAINCHARACTER_H
