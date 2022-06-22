//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_SPACESHIP_H
#define SPACE_INVADERS_SPACESHIP_H


#include <SFML/Graphics/Sprite.hpp>

class SpaceShip {
private:
    int positionX;
    int positionY;
    sf::RectangleShape tempShape;
    sf::Sprite spaceShipSprite;

public:
    SpaceShip();

    int getPositionX() const;

    void setPositionX(int positionX);

    int getPositionY() const;

    void setPositionY(int positionY);

    const sf::RectangleShape &getTempShape() const;

    void setTempShape(const sf::RectangleShape &tempShape);
};


#endif //SPACE_INVADERS_SPACESHIP_H
