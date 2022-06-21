//
// Created by kneiv on 6/21/2022.
//

#ifndef SPACE_INVADERS_VIEW_H
#define SPACE_INVADERS_VIEW_H

#include <SFML/Graphics.hpp>

class View {
private:
    sf::RenderWindow *mainWindow{};
    sf::Sprite backGround;
    sf::Sprite alien;
    sf::Sprite ship;


public:
    View();

    sf::RenderWindow *getMainWindow() const;

    sf::Sprite getBackGround() const;

    sf::Sprite getShip() const;

    sf::Sprite getAlien();

    void initView();

    void drawBackground();
};


#endif //SPACE_INVADERS_VIEW_H
