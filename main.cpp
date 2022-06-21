#include <iostream>
#include <SFML/Graphics.hpp>
#include "Model.h"
#include "View.h"
#include "Controller.h"

int main() {

    Model model(2,3);
    View view;

    Controller controller(view, model);

    controller.startGame();

    return 0;
}
