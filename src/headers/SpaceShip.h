//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_SPACESHIP_H
#define SPACE_INVADERS_SPACESHIP_H

#include <SFML/Graphics.hpp>
#include "LaserBeam.h"

class SpaceShip {
private:
    int positionX;
    int positionY;
    float velocity;
    float maxVelocity;
    float minVelocity;
    float drag;
    float acceleration;

    int reload_duration = 45 ;

    std::vector<LaserBeam> bullets;

    sf::Texture spaceShipTexture;
    sf::Sprite spaceShipSprite;

public:
    SpaceShip();

    const sf::Sprite &getSpaceShipSprite() const;

    void move(float dir_x);

    void decelerate();

    void update();

    void refreshAmmo();

    void shoot();

    std::vector<LaserBeam> &getBullets() const;


};


#endif //SPACE_INVADERS_SPACESHIP_H
