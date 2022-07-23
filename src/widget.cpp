#include "widget.h"
#include "ui_widget.h"
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

    ui->graphicsView->setScene(scene);
}

Widget::~Widget()
{
    delete ui;
}
