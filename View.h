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

    const sf::RenderWindow &getMainWindow() const;

    const sf::Sprite &getBackGround() const;

    const sf::Sprite &getAlien() const;

    const sf::Sprite &getShip() const;

    void initView();
};


#endif //SPACE_INVADERS_VIEW_H
