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

public:
    Controller(const View &view, const Model &model);
};


#endif //SPACE_INVADERS_CONTROLLER_H
