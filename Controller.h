//
// Created by kneiv on 6/21/2022.
//

#ifndef SPACE_INVADERS_CONTROLLER_H
#define SPACE_INVADERS_CONTROLLER_H

#include "View.h"
#include "SpaceShip.h"

class Controller {
    View view;
    SpaceShip spaceShip;

public:
    Controller(const View &view, const SpaceShip &spaceShip);

    void startGame();

};


#endif //SPACE_INVADERS_CONTROLLER_H
