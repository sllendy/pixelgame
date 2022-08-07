#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QGraphicsPixmapItem>
#include "world.h"
#include "maincharacter.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    scene = new Scene(this);
    scene->setSceneRect(-250, -250, 500, 500);

    connect(this, &Widget::moveUp, scene, &Scene::moveUp);
    connect(this, &Widget::moveDown, scene, &Scene::moveDown);
    connect(this, &Widget::moveLeft, scene, &Scene::moveLeft);
    connect(this, &Widget::moveRight, scene, &Scene::moveRight);

    ui->graphicsView->setScene(scene);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    if (event->key()  == Qt::Key_W)
    {
        emit moveUp();
        QWidget::keyPressEvent(event);
    }

    if (event->key() == Qt::Key_A)
    {
        emit moveLeft();
        QWidget::keyPressEvent(event);
    }

    if (event->key() == Qt::Key_S)
    {
        emit moveDown();
        QWidget::keyPressEvent(event);
    }

    if (event->key() == Qt::Key_D)
    {
        emit moveRight();
        QWidget::keyPressEvent(event);
    }
}
