//
// Created by kneiv on 6/22/2022.
//

#include <iostream>
#include "Alien.h"


Alien::Alien(int actualX, int actualY) : actualX(actualX), actualY(actualY) {
    alienTexture = new sf::Texture;
    alienTexture->loadFromFile(R"(C:\Users\kneiv\CLionProjects\space-invaders\assets\alien1.png)");

    alienSprite.setTexture(*alienTexture);
    velocity = 1.f;
    maxVelocity = 1.f;

    actualX = actualX * ((alienTexture->getSize().x * alienTexture->getSize().y) - alienTexture->getSize().x);
    actualY = actualY * (alienTexture->getSize().x + 7.5 * alienTexture->getSize().y);
    alienSprite.setPosition({static_cast<float>(actualX), static_cast<float>(actualY)});
    alienSprite.scale({5, 5});
}

void Alien::move(const float dir_x) {
    this->velocity += dir_x;

    if (std::abs(this->velocity) > this->maxVelocity) {
        this->velocity = this->maxVelocity * ((this->velocity < 0.f) ? -1.f : 1.f);
    }
    this->alienSprite.move({this->velocity, 0});
}

void Alien::updateMovement(float dir_x) {
    this->move(dir_x);
}

const sf::Sprite &Alien::getAlienSprite() const{
    return alienSprite;
}