#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "scene.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

    Scene *scene;

signals:
    void moveDown();
    void moveLeft();
    void moveUp();
    void moveRight();

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // WIDGET_H
