//
// Created by kneiv on 6/21/2022.
//

#ifndef SPACE_INVADERS_CONTROLLER_H
#define SPACE_INVADERS_CONTROLLER_H

#include "Model.h"
#include "View.h"

class Controller {
    View view;
    Model model;
    SpaceShip spaceShip;

public:
    Controller(View view, const Model &model);

    void startGame();

};


#endif //SPACE_INVADERS_CONTROLLER_H
