//
// Created by kneiv on 6/22/2022.
//

#include "Alien.h"

Alien::Alien(int gridPositionX, int gridPositionY, int actualX, int actualY) : gridPositionX(gridPositionX),
                                                                               gridPositionY(gridPositionY),
                                                                               actualX(actualX), actualY(actualY) {


    alienTexture.loadFromFile(R"(C:\Users\kneiv\CLionProjects\space-invaders\assets\alien1.png)");
    alienSprite.setTexture(alienTexture);

    actualX = (23*actualX*3) + (6*alienTexture.getSize().x);
    actualY = actualY * 50 + alienTexture.getSize().y;

    alienSprite.setPosition({static_cast<float>(actualX), static_cast<float>(actualY)});
    alienSprite.scale({5, 5});
}

const sf::Sprite &Alien::getAlienSprite() const {
    return this->alienSprite;
}

void Alien::setAlienSprite(const sf::Sprite &alienSprite) {
    this->alienSprite = alienSprite;
}

const sf::Texture &Alien::getAlienTexture() const {
    return alienTexture;
}

void Alien::setAlienTexture(const sf::Texture &alienTexture) {
    Alien::alienTexture = alienTexture;
}