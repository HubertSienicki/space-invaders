//
// Created by kneiv on 6/21/2022.
//

#ifndef SPACE_INVADERS_CONTROLLER_H
#define SPACE_INVADERS_CONTROLLER_H

#include "View.h"
#include "SpaceShip.h"

class Controller {
private:
    View view;
    SpaceShip spaceShip;
    std::vector<Alien>alienGrid;
    float moveDir = 1.f;

public:
    Controller(View view, SpaceShip spaceShip);

    void startGame();
    void initAliens();
    void changeDirAlienGrid();
    void moveGrid();
    void checkHit();
};


#endif //SPACE_INVADERS_CONTROLLER_H
