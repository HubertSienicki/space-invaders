//
// Created by kneiv on 6/22/2022.
//

#ifndef SPACE_INVADERS_ALIEN_H
#define SPACE_INVADERS_ALIEN_H


#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include "LaserBeam.h"

struct hitBox {
public:
    float HitboxXStart;
    float HitboxXEnd;
    float HitboxYStart;
    float HitboxYEnd;

};

class Alien {
private:
    float velocity;
    float maxVelocity;
    int actualX;
    int actualY;
    bool isDead;

    hitBox hb;

    void setHitboxes();

    sf::Texture *alienTexture;
    sf::Sprite alienSprite;


public:

    Alien(int actualX, int actualY, bool isDead);

    const sf::Sprite &getAlienSprite() const;

    void move(float dir_x);

    void updateMovement(float dir_x);

    bool getDead() const;

    const hitBox &getHb() const;

    void die();
};


#endif //SPACE_INVADERS_ALIEN_H
