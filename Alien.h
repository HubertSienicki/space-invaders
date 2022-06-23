//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_ALIEN_H
#define SPACE_INVADERS_ALIEN_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

class Alien {
private:
    float velocity;
    float maxVelocity;
    int actualX;
    int actualY;

    sf::Texture *alienTexture;
    sf::Sprite alienSprite;


public:

    Alien(int actualX, int actualY);

    const sf::Sprite & getAlienSprite() const;

    void move(float dir_x);
    void updateMovement(float dir_x);
};


#endif //SPACE_INVADERS_ALIEN_H
