//
// Created by kneiv on 6/21/2022.
//

#include "Controller.h"

#include <utility>

//GLOBAL SPACESHIP
SpaceShip spaceShip();

Controller::Controller(View view, const Model &model) : view(std::move(view)), model(model) {}

void Controller::startGame() {

    while(view.getMainWindow()->isOpen()){
        view.getMainWindow()->clear();

        sf::Event e{};

        while(view.getMainWindow()->pollEvent(e)){
            if(e.type == sf::Event::Closed){
                view.getMainWindow()->close();
            }
        }
        view.drawBackground();
        view.drawSpaceShip(spaceShip);
        view.drawAlienGrid();
        view.getMainWindow()->display();
    }
}

