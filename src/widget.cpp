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
    scene->setSceneRect(-250, -300, 500, 600);

    scene->addLine(-400,0,400,0,QPen(Qt::blue));
    scene->addLine(0,-400,0,400,QPen(Qt::blue));

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
        qDebug() << "W Pressed";
        emit moveUp();
        QWidget::keyPressEvent(event);
    }

    if (event->key() == Qt::Key_A)
    {
        emit moveLeft();
        qDebug() << "A Pressed";
        QWidget::keyPressEvent(event);
    }

    if (event->key() == Qt::Key_S)
    {
        emit moveDown();
        qDebug() << "S Pressed";
        QWidget::keyPressEvent(event);
    }

    if (event->key() == Qt::Key_D)
    {
        emit moveRight();
        qDebug() << "D Pressed";
        QWidget::keyPressEvent(event);
    }
}
