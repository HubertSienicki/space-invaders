//
// Created by kneiv on 6/22/2022.
//

#include <iostream>
#include "Alien.h"
#include "LaserBeam.h"


Alien::Alien(int actualX, int actualY, bool isDead) : actualX(actualX), actualY(actualY), isDead(isDead) {
    alienTexture = new sf::Texture;
    alienTexture->loadFromFile(R"(C:\Users\kneiv\CLionProjects\space-invaders\assets\alien1.png)");

    alienSprite.setTexture(*alienTexture);
    velocity = 0.f;
    maxVelocity = 0.5f;

    actualX = actualX * ((alienTexture->getSize().x * alienTexture->getSize().y) - alienTexture->getSize().x);
    actualY = actualY * (alienTexture->getSize().x + 7.5 * alienTexture->getSize().y);
    alienSprite.setPosition({static_cast<float>(actualX), static_cast<float>(actualY)});
    alienSprite.scale({5, 5});
}

void Alien::move(const float dir_x) {
    this->velocity += dir_x * 0.5;

    if (std::abs(this->velocity) > this->maxVelocity) {
        this->velocity = this->maxVelocity * ((this->velocity < 0.f) ? -1.f : 1.f);
    }
    this->alienSprite.move({this->velocity, 0});
    setHitboxes();
}

void Alien::setHitboxes() {
    hb.HitboxXStart = this->alienSprite.getPosition().x;
    hb.HitboxYStart = this->alienSprite.getPosition().y;

    hb.HitboxXEnd = this->alienSprite.getPosition().x + 11 * 5;
    hb.HitboxYEnd = this->alienSprite.getPosition().y + 8 * 5; //because alien is scaled * 5;
}

bool Alien::getDead() const{
    return this->isDead;
}

void Alien::die() {
    this->isDead = true;
}

void Alien::updateMovement(float dir_x) {
    this->move(dir_x);
}

const sf::Sprite &Alien::getAlienSprite() const{
    return alienSprite;
}

const hitBox &Alien::getHb() const {
    return hb;
}






