//
// Created by kneiv on 6/22/2022.
//

#include <SFML/Graphics/RectangleShape.hpp>
#include "SpaceShip.h"

SpaceShip::SpaceShip() {
    tempShape.setSize({50, 10});
    this->positionX = 400-tempShape.getSize().x; // Default
    this->positionY = 750; // Default
    tempShape.setPosition(positionX, positionY);
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
