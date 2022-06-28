//
// Created by kneiv on 6/22/2022.
//

#include <iostream>
#include "../headers/SpaceShip.h"

SpaceShip::SpaceShip() {
    spaceShipTexture.loadFromFile(R"(..\assets\spaceship.png)"); //
    spaceShipSprite.setTexture(spaceShipTexture);
    spaceShipSprite.scale({5, 5});

    this->velocity = 0.f;
    this->maxVelocity = 1.f;
    this->minVelocity = 0.201f;
    this->acceleration = 0.212f;
    this->drag = 0.9955f;


    this->positionX = 400 - spaceShipTexture.getSize().x; // Default
    this->positionY = 750 - spaceShipTexture.getSize().y; // Default

    spaceShipSprite.setPosition(this->positionX, this->positionY);
}

void SpaceShip::move(const float dir_x) {
    this->velocity += dir_x * this->acceleration;
    if (std::abs(velocity) > maxVelocity) {
        this->velocity = this->maxVelocity * ((this->velocity < 0.f) ? -1.f : 1.f);
    }
    this->spaceShipSprite.move({this->velocity, 0});
}


void SpaceShip::decelerate() {
    if (this->spaceShipSprite.getPosition().x > 0 && this->spaceShipSprite.getPosition().x < 755) {
        this->velocity *= this->drag;
        if (std::abs(velocity) < this->minVelocity) {
            this->velocity = 0.f;
        }

        if (this->spaceShipSprite.getPosition().x == 0 && this->spaceShipSprite.getPosition().x == 755) {
            velocity = 0;
        }
        this->spaceShipSprite.move({this->velocity, 0});
    }
}

void SpaceShip::update() {
    if (this->spaceShipSprite.getPosition().x > 0 && this->spaceShipSprite.getPosition().x < 755) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
            this->move(-1.f);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
            this->move(1.f);
        }
    } else {
        if (this->spaceShipSprite.getPosition().x <= 0) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right)) {
                this->move(1.f);
            }
        } else if (this->spaceShipSprite.getPosition().x >= 750) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left)) {
                this->move(-1.f);
            }
        }
    }

    for (LaserBeam &movable: bullets) {
        movable.move(-1.0f);
        if (movable.getLaserBeamSprite().getPosition().y <= -10) {
            movable.is_dead = true;
        }
    }

    bullets.erase(remove_if(bullets.begin(), bullets.end(), [](const LaserBeam &bullet) -> bool { //sets max bullets available to 9
        return bullet.is_dead;
    }), bullets.end());
}

void SpaceShip::shoot() {
    if (reload_duration == 0) {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
            auto *lb = new LaserBeam();
            lb->setPosition(this->spaceShipSprite.getPosition().x, this->spaceShipSprite.getPosition().y);
            this->bullets.push_back(*lb);
            reload_duration = 45;
        }
    } else {
        reload_duration--;
    }
}

const sf::Sprite &SpaceShip::getSpaceShipSprite() const {
    return spaceShipSprite;
}


std::vector<LaserBeam> &SpaceShip::getBullets() const {
    return (std::vector<LaserBeam> &)bullets;
}






