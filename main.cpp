#include <iostream>
#include <SFML/Graphics.hpp>
#include "View.h"
#include "Controller.h"

int main() {

    SpaceShip spaceShip;
    View view;

    Controller controller(view, spaceShip);

    controller.startGame();

    return 0;
}
