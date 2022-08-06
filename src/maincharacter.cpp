#include "maincharacter.h"
#include <QTimer>
#include <QDebug>

mainCharacter::mainCharacter(QPixmap pixmap) :
    characterDirection(characterDir::D1)
{
    setPixmap(pixmap);

}

void mainCharacter::updatePixmap()
{

    if (characterDirection == characterDir::D1){
        setPixmap(QPixmap(":/assets/D1.png"));
    }

    if (characterDirection == characterDir::D2){
        setPixmap(QPixmap(":/assets/D2.png"));
    }

    if (characterDirection == characterDir::D3){
        setPixmap(QPixmap(":/assets/D3.png"));
    }

    if (characterDirection == characterDir::D4){
        setPixmap(QPixmap(":/assets/D4.png"));
    }
}

void mainCharacter::moveUp()
{

}



void mainCharacter::moveDown()
{
    if (characterDirection == characterDir::D1){
        characterDirection = characterDir::D2;
    }
    else if (characterDirection == characterDir::D2){
             characterDirection = characterDir::D3;
    }
    else if (characterDirection == characterDir::D3){
             characterDirection = characterDir::D4;
    }
    else if (characterDirection == characterDir::D4){
             characterDirection = characterDir::D1;
    }
    updatePixmap();
}

void mainCharacter::moveLeft()
{

}

void mainCharacter::moveRight()
{

}

