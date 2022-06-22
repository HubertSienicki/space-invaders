//
// Created by kneiv on 6/21/2022.
//

#include "Controller.h"

#include <utility>
#include <iostream>


Controller::Controller(const View &view, const SpaceShip &spaceShip) : view(view), spaceShip(spaceShip) {}

void Controller::startGame() {

    while (view.getMainWindow()->isOpen()) {
        view.getMainWindow()->clear();

        sf::Event e{};

        while (view.getMainWindow()->pollEvent(e)) {
            if (e.type == sf::Event::Closed) {
                view.getMainWindow()->close();
            }
        }
        spaceShip.updateMovement();
        spaceShip.decelerate();
        view.drawBackground();
        view.drawSpaceShip(spaceShip);
        view.drawAlienGrid();
        view.getMainWindow()->display();
    }
}



