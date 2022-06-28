//
// Created by kneiv on 6/21/2022.
//

#include "Controller.h"
#include <utility>
#include <iostream>

Controller::Controller(View view, SpaceShip spaceShip)
        : view(std::move(view)), spaceShip(std::move(spaceShip)) {}

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

        //Updates of spaceship
        spaceShip.shoot();
        spaceShip.update();
        spaceShip.decelerate();

        this->changeDirAlienGrid();
        checkHit();

        view.drawBackground();
        view.drawBullet(spaceShip.getBullets());
        view.drawSpaceShip(spaceShip);
        view.drawAlienGrid(alienGrid);

        view.getMainWindow()->display();
    }
}

void Controller::initAliens() {
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 5; ++j) {
            Alien x(i, j, 0);
            this->alienGrid.push_back(x);
        }
    }
}

void Controller::changeDirAlienGrid() {
    for (const Alien& alien:alienGrid) {
        if(alien.getAlienSprite().getPosition().x < 0){
            moveDir = 1.f;
        }else if(alien.getAlienSprite().getPosition().x >= 750){
            moveDir = -1.f;
        }
    }
    moveGrid();
}

void Controller::moveGrid() {
    for (auto &i: this->alienGrid) {
        i.updateMovement(moveDir);
    }
}

void Controller::checkHit() {
    for (Alien& alien:alienGrid) {
        for (LaserBeam& bullet:spaceShip.getBullets()) {
            if((alien.getHb().HitboxXStart <= bullet.getLaserBeamSprite().getPosition().x
                && alien.getHb().HitboxXEnd >= bullet.getLaserBeamSprite().getPosition().x)
                && (alien.getHb().HitboxYStart <= bullet.getLaserBeamSprite().getPosition().y
                && alien.getHb().HitboxYEnd >= bullet.getLaserBeamSprite().getPosition().y)){
                alien.die();
                bullet.die();
            }
        }
    }

    alienGrid.erase(std::remove_if(alienGrid.begin(), alienGrid.end(), [](const Alien& alien)->bool {
        return alien.getDead();
    }), alienGrid.end());
}



