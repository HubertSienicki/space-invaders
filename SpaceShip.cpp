//
// Created by kneiv on 6/22/2022.
//

#include <SFML/Graphics/RectangleShape.hpp>
#include "SpaceShip.h"

SpaceShip::SpaceShip() {
    spaceShipTexture.loadFromFile(R"(C:\Users\kneiv\CLionProjects\space-invaders\assets\spaceship.png)"); //
    spaceShipSprite.setTexture(spaceShipTexture);
    spaceShipSprite.scale({5, 5});

    this->positionX = 400 - spaceShipTexture.getSize().x; // Default
    this->positionY = 750 - spaceShipTexture.getSize().y; // Default

    spaceShipSprite.setPosition(this->positionX, this->positionY);
}

int SpaceShip::getPositionX() const {
    return positionX;
}

void SpaceShip::setPositionX(int positionX) {
    SpaceShip::positionX = positionX;
}

int SpaceShip::getPositionY() const {
    return positionY;
}

void SpaceShip::setPositionY(int positionY) {
    SpaceShip::positionY = positionY;
}

const sf::RectangleShape &SpaceShip::getTempShape() const {
    return tempShape;
}

void SpaceShip::setTempShape(const sf::RectangleShape &tempShape) {
    SpaceShip::tempShape = tempShape;
}

const sf::Sprite &SpaceShip::getSpaceShipSprite() const {
    return spaceShipSprite;
}

void SpaceShip::setSpaceShipSprite(const sf::Sprite &spaceShipSprite) {
    SpaceShip::spaceShipSprite = spaceShipSprite;
}
