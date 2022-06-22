//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_ALIEN_H
#define SPACE_INVADERS_ALIEN_H


#include <SFML/Graphics/Sprite.hpp>

class Alien {
private:
    int gridX;
    int gridY;
    sf::Sprite AlienSprite;

public:
    Alien(int gridX, int gridY);

    int getGridX() const;

    void setGridX(int gridX);

    int getGridY() const;

    void setGridY(int gridY);

    const sf::Sprite &getAlienSprite() const;

    void setAlienSprite(const sf::Sprite &alienSprite);
};


#endif //SPACE_INVADERS_ALIEN_H
