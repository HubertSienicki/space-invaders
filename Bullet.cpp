//
// Created by kneiv on 6/22/2022.
//

#include "Bullet.h"

Bullet::Bullet() {}

int Bullet::getVelocity() const {
    return velocity;
}

void Bullet::setVelocity(int velocity) {
    Bullet::velocity = velocity;
}

int Bullet::getPositionX() const {
    return positionX;
}

void Bullet::setPositionX(int positionX) {
    Bullet::positionX = positionX;
}

int Bullet::getPositionY() const {
    return positionY;
}

void Bullet::setPositionY(int positionY) {
    Bullet::positionY = positionY;
}

const sf::RectangleShape &Bullet::getBulletSprite() const {
    return bulletSprite;
}

void Bullet::setBulletSprite(const sf::RectangleShape &bulletSprite) {
    Bullet::bulletSprite = bulletSprite;
}
