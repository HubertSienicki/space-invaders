//
// Created by kneiv on 6/21/2022.
//

#ifndef SPACE_INVADERS_VIEW_H
#define SPACE_INVADERS_VIEW_H

#include <SFML/Graphics.hpp>
#include "SpaceShip.h"
#include "Alien.h"

class View {
private:
    sf::RenderWindow *mainWindow{};
    sf::Sprite backGround;


public:
    View();

    sf::RenderWindow *getMainWindow() const;

    sf::Sprite getBackGround() const;

    void initView();

    void drawBackground();

    void drawSpaceShip(const SpaceShip& spaceShip);

    void drawBullet();

    void drawAlienGrid(const std::vector<Alien>& aliens);

};


#endif //SPACE_INVADERS_VIEW_H
