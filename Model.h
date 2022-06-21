//
// Created by kneiv on 6/21/2022.
//

#ifndef SPACE_INVADERS_MODEL_H
#define SPACE_INVADERS_MODEL_H


class Model {
public:
    Model(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

private:
    int x;
    int y;

};


#endif //SPACE_INVADERS_MODEL_H
