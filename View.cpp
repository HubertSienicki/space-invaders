#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
//
// Created by kneiv on 6/21/2022.
//
#include "View.h"
#include "Alien.h"
#include "LaserBeam.h"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "NullDereference"

View::View() {
    initView();
}

void View::initView() {
    mainWindow = new sf::RenderWindow(sf::VideoMode(800, 800), "Space Invaders");
    mainWindow->setVerticalSyncEnabled(true);

    backGround.scale({15, 15});
}

sf::RenderWindow *View::getMainWindow() const {
    return this->mainWindow;
}

sf::Sprite View::getBackGround() const {
    return backGround;
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


void View::drawSpaceShip(const SpaceShip &spaceShip) {
    mainWindow->draw(spaceShip.getSpaceShipSprite());
}

void View::drawAlienGrid(const std::vector<Alien> &aliens) {
    for (const auto &alien: aliens) {
        mainWindow->draw(alien.getAlienSprite());
    }
}

void View::drawBullet(const std::vector<LaserBeam>& lb) {
    for(const LaserBeam& bullet:lb){
        mainWindow->draw(bullet.getLaserBeamSprite());
    }
}


#pragma clang diagnostic pop
#pragma clang diagnostic pop