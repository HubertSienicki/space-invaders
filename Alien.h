//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_ALIEN_H
#define SPACE_INVADERS_ALIEN_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class Alien {
private:
    int gridPositionX;
    int gridPositionY;

    int actualX;
    int actualY;

    sf::Texture alienTexture;
    sf::Sprite alienSprite;

public:
    Alien(int gridPositionX, int gridPositionY, int actualX, int actualY);

    const sf::Texture &getAlienTexture() const;

    void setAlienTexture(const sf::Texture &alienTexture);

    const sf::Sprite &getAlienSprite() const;

    void setAlienSprite(const sf::Sprite &alienSprite);
};


#endif //SPACE_INVADERS_ALIEN_H
