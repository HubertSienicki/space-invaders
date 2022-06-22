//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_SPACESHIP_H
#define SPACE_INVADERS_SPACESHIP_H

#include <SFML/Graphics.hpp>

class SpaceShip {
private:
    int positionX;
    int positionY;
    float velocity;
    float maxVelocity;
    float minVelocity;
    float drag;
    float acceleration;

    sf::Texture spaceShipTexture;
    sf::Sprite spaceShipSprite;

public:
    SpaceShip();

    int getPositionX() const;

    void setPositionX(int positionX);

    int getPositionY() const;

    void setPositionY(int positionY);

    const sf::Sprite &getSpaceShipSprite() const;

    void setSpaceShipSprite(const sf::Sprite &spaceShipSprite);

    void update();

    void setMovingLeft();

    void setMovingRight();

    void accelerate(bool acceleration);

    void move(float dir_x);

    void decelerate();
    void updateMovement();
};


#endif //SPACE_INVADERS_SPACESHIP_H
