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
    mainWindow = new sf::RenderWindow(sf::VideoMode(600, 400), "Space Invaders");
}

const sf::RenderWindow &View::getMainWindow() const {
    return *mainWindow;
}

const sf::Sprite &View::getBackGround() const {
    return backGround;
}

const sf::Sprite &View::getAlien() const {
    return alien;
}

const sf::Sprite &View::getShip() const {
    return ship;
}

#pragma clang diagnostic pop