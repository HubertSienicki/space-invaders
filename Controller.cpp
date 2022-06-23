//
// Created by kneiv on 6/21/2022.
//

#include "Controller.h"

#include <utility>


Controller::Controller(View view, SpaceShip spaceShip) : view(std::move(view)), spaceShip(std::move(spaceShip)) {}

void Controller::startGame() {
    this->initAliens();
    this->alienGrid.reserve(40);

    while (view.getMainWindow()->isOpen()) {
        view.getMainWindow()->clear();

        sf::Event e{};

        while (view.getMainWindow()->pollEvent(e)) {
            if (e.type == sf::Event::Closed) {
                view.getMainWindow()->close();
            }
        }
        //Updates movement of aliens and spaceship
        spaceShip.updateMovement();
        spaceShip.decelerate();
        this->changeDirAlienGrid();

        view.drawBackground();
        view.drawSpaceShip(spaceShip);
        view.drawAlienGrid(alienGrid);
        view.getMainWindow()->display();
    }
}

/**
 * 87654321
 * 1211109
 * 212019181716151413
 * 302928272625242322
 * 393837363534333231
 */
void Controller::initAliens() {
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 5; ++j) {
            Alien x(i, j);
            this->alienGrid.push_back(x);
        }
    }
//    Alien alientemp(1,1,1,1);
//    this->alienGrid.push_back(alientemp);
}

void Controller::changeDirAlienGrid() {
    if (this->alienGrid.at(0).getAlienSprite().getPosition().x < 0) {
        moveDir = 1.f;
        moveGrid();
    } else if (this->alienGrid.at(39).getAlienSprite().getPosition().x >= 750) {
        moveDir = -1.f;
        moveGrid();
    }else {
        moveGrid();
    }
}

void Controller::moveGrid() {
    for (auto &i: this->alienGrid) {
        i.updateMovement(moveDir);
    }
}



