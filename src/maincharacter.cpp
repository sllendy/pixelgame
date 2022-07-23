#include "maincharacter.h"
#include <QTimer>

mainCharacter::mainCharacter(QPixmap pixmap) :
    characterDirection(characterDir::D1)
{
    setPixmap(pixmap);

}

void mainCharacter::updatePixmap(characterDir characterDir_in)
{
    characterDirection = characterDir_in;

    if (characterDirection == characterDir::D1){
        setPixmap(QPixmap(":/sprite1.png"));
        characterDirection = characterDir::D2;
    }

    if (characterDirection == characterDir::D2){
        setPixmap(QPixmap(":/sprite2.png"));
        characterDirection = characterDir::D1;
    }
}

