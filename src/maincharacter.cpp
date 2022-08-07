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

    else if (characterDirection == characterDir::D2){
        setPixmap(QPixmap(":/assets/D2.png"));
    }

    else if (characterDirection == characterDir::D3){
        setPixmap(QPixmap(":/assets/D3.png"));
    }

    else if (characterDirection == characterDir::D4){
        setPixmap(QPixmap(":/assets/D4.png"));
    }

    else if (characterDirection == characterDir::U1){
        setPixmap(QPixmap(":/assets/U1.png"));
    }

    else if (characterDirection == characterDir::U2){
        setPixmap(QPixmap(":/assets/U2.png"));
    }

    else if (characterDirection == characterDir::U3){
        setPixmap(QPixmap(":/assets/U3.png"));
    }

    else if (characterDirection == characterDir::U4){
        setPixmap(QPixmap(":/assets/U4.png"));
    }

    else if (characterDirection == characterDir::L1){
        setPixmap(QPixmap(":/assets/L1.png"));
    }

    else if (characterDirection == characterDir::L2){
        setPixmap(QPixmap(":/assets/L2.png"));
    }

    else if (characterDirection == characterDir::L3){
        setPixmap(QPixmap(":/assets/L3.png"));
    }

    else if (characterDirection == characterDir::L4){
        setPixmap(QPixmap(":/assets/L4.png"));
    }

    else if (characterDirection == characterDir::R1){
        setPixmap(QPixmap(":/assets/R1.png"));
    }

    else if (characterDirection == characterDir::R2){
        setPixmap(QPixmap(":/assets/R2.png"));
    }

    else if (characterDirection == characterDir::R3){
        setPixmap(QPixmap(":/assets/R3.png"));
    }

    else if (characterDirection == characterDir::R4){
        setPixmap(QPixmap(":/assets/R4.png"));
    }
}

void mainCharacter::moveUp()
{
    if (characterDirection == characterDir::U1){
        characterDirection = characterDir::U2;
    }
    else if (characterDirection == characterDir::U2){
             characterDirection = characterDir::U3;
    }
    else if (characterDirection == characterDir::U3){
             characterDirection = characterDir::U4;
    }
    else if (characterDirection == characterDir::U4){
             characterDirection = characterDir::U1;
    }
    else{
        characterDirection = characterDir::U1;
    }
    updatePixmap();

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
    else{
        characterDirection = characterDir::D1;
    }
    updatePixmap();
}

void mainCharacter::moveLeft()
{
    if (characterDirection == characterDir::L1){
        characterDirection = characterDir::L2;
    }
    else if (characterDirection == characterDir::L2){
             characterDirection = characterDir::L3;
    }
    else if (characterDirection == characterDir::L3){
             characterDirection = characterDir::L4;
    }
    else if (characterDirection == characterDir::L4){
             characterDirection = characterDir::L1;
    }
    else{
        characterDirection = characterDir::L1;
    }
    updatePixmap();

}

void mainCharacter::moveRight()
{
    if (characterDirection == characterDir::R1){
        characterDirection = characterDir::R2;
    }
    else if (characterDirection == characterDir::R2){
             characterDirection = characterDir::R3;
    }
    else if (characterDirection == characterDir::R3){
             characterDirection = characterDir::R4;
    }
    else if (characterDirection == characterDir::R4){
             characterDirection = characterDir::R1;
    }
    else{
        characterDirection = characterDir::R1;
    }
    updatePixmap();

}

