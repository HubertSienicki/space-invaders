#include "src/headers/View.h"
#include "src/headers/Controller.h"

int main() {

    SpaceShip spaceShip;
    View view;

    Controller controller(view, spaceShip);

    controller.startGame();

    return 0;
}
