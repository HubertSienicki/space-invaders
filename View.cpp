#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
//
// Created by kneiv on 6/21/2022.
//
#include "View.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "NullDereference"

View::View() {
    initView();
}

void View::initView() {
    mainWindow = new sf::RenderWindow(sf::VideoMode(800, 800), "Space Invaders");

    backGround.scale({15, 15});

}

sf::RenderWindow *View::getMainWindow() const {
    return this->mainWindow;
}

sf::Sprite View::getBackGround() const {
    return backGround;
}

sf::Sprite View::getAlien() {
    return alien;
}

sf::Sprite View::getShip() const {
    return ship;
}

void View::drawBackground() {
    sf::Texture backgroundTexture{};
    backgroundTexture.loadFromFile(
            R"(C:\Users\kneiv\CLionProjects\space-invaders\assets\SpaceInvaders_Background.png)",
            sf::IntRect(
                    0,
                    0,
                    320,
                    340));


    backGround.setTexture(backgroundTexture);

    mainWindow->draw(backGround);
}

void View::drawAlienGrid() {

}

void View::drawSpaceShip(SpaceShip spaceShip) {
    mainWindow->draw(spaceShip.getTempShape());
}

void View::drawBullet() {

}


#pragma clang diagnostic pop
#pragma clang diagnostic pop