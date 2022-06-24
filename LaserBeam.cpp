//
// Created by kneiv on 6/23/2022.
//

#include "LaserBeam.h"

LaserBeam::LaserBeam(){
    this->maxVelocity = 2.f;
    this->velocity = 0.f;
    this->is_dead = false;

    this->laserBeamTexture = new sf::Texture;
    this->laserBeamTexture->loadFromFile(R"(C:\Users\kneiv\CLionProjects\space-invaders\assets\shot.png)");
    this->laserBeamSprite.setTexture(*laserBeamTexture);
}

void LaserBeam::init(int posX, int posY) {
    this->laserBeamSprite.move({5, 5});
}

void LaserBeam::move(int dir_y) {
    this->velocity += dir_y;

    if (std::abs(this->velocity) > this->maxVelocity) {
        this->velocity = this->maxVelocity * ((this->velocity < 0.f) ? -1.f : 1.f);
    }

    this->laserBeamSprite.move({0,  this->velocity});
}


const sf::Sprite &LaserBeam::getLaserBeamSprite() const {
    return laserBeamSprite;
}

void LaserBeam::setLaserBeamSprite(const sf::Sprite &laserBeamSprite) {
    LaserBeam::laserBeamSprite = laserBeamSprite;
}

float LaserBeam::getVelocity() const {
    return velocity;
}

void LaserBeam::setVelocity(float velocity) {
    LaserBeam::velocity = velocity;
}

void LaserBeam::setPosition(const float x, const float y) {
    this->laserBeamSprite.setPosition(x + 21 ,y - 22);
    this->laserBeamSprite.scale({3,3});
}
