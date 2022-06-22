//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_SPACESHIP_H
#define SPACE_INVADERS_SPACESHIP_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class SpaceShip {
private:
    int positionX;
    int positionY;
    sf::RectangleShape tempShape;
    sf::Texture spaceShipTexture;
    sf::Sprite spaceShipSprite;

public:
    SpaceShip();

    int getPositionX() const;

    void setPositionX(int positionX);

    int getPositionY() const;

    void setPositionY(int positionY);

    const sf::RectangleShape &getTempShape() const;

    void setTempShape(const sf::RectangleShape &tempShape);

    const sf::Sprite &getSpaceShipSprite() const;

    void setSpaceShipSprite(const sf::Sprite &spaceShipSprite);
};


#endif //SPACE_INVADERS_SPACESHIP_H
