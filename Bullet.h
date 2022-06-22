//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_BULLET_H
#define SPACE_INVADERS_BULLET_H


#include <SFML/Graphics/RectangleShape.hpp>

class Bullet {
private:
    int velocity;
    int positionX;
    int positionY;
    sf::RectangleShape bulletSprite;

public:
    Bullet();

    int getVelocity() const;

    void setVelocity(int velocity);

    int getPositionX() const;

    void setPositionX(int positionX);

    int getPositionY() const;

    void setPositionY(int positionY);

    const sf::RectangleShape &getBulletSprite() const;

    void setBulletSprite(const sf::RectangleShape &bulletSprite);
};


#endif //SPACE_INVADERS_BULLET_H
