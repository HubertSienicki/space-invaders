//
// Created by kneiv on 6/22/2022.
//

#include "Alien.h"

Alien::Alien(int gridX, int gridY) : gridX(gridX), gridY(gridY) {}

int Alien::getGridX() const {
    return gridX;
}

void Alien::setGridX(int gridX) {
    Alien::gridX = gridX;
}

int Alien::getGridY() const {
    return gridY;
}

void Alien::setGridY(int gridY) {
    Alien::gridY = gridY;
}

const sf::Sprite &Alien::getAlienSprite() const {
    return AlienSprite;
}

void Alien::setAlienSprite(const sf::Sprite &alienSprite) {
    AlienSprite = alienSprite;
}
