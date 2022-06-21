//
// Created by kneiv on 6/21/2022.
//

#include "Model.h"

Model::Model(int x, int y) : x(x), y(y) {}

int Model::getX() const {
    return x;
}

void Model::setX(int x) {
    Model::x = x;
}

int Model::getY() const {
    return y;
}

void Model::setY(int y) {
    Model::y = y;
}
