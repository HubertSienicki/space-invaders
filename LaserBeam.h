//
// Created by kneiv on 6/23/2022.
//

#ifndef SPACE_INVADERS_LASERBEAM_H
#define SPACE_INVADERS_LASERBEAM_H


#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

class LaserBeam {
    float maxVelocity;
    float acceleration;
    float velocity;

    sf::Texture *laserBeamTexture;
    int posX, posY;

public:
    LaserBeam();

    sf::Sprite laserBeamSprite;

    void init(int posX, int posY);
    bool is_dead;

    void move(int dir_y);

    float getVelocity() const;

    void setVelocity(float velocity);

    const sf::Sprite &getLaserBeamSprite() const;

    void setLaserBeamSprite(const sf::Sprite &laserBeamSprite);
    void setPosition(float x, float y);

    void die();
};


#endif //SPACE_INVADERS_LASERBEAM_H
