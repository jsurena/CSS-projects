//
// Created by JSS19 on 5/15/2018.
//

#include <string>
#include "Enemy.h"

using namespace std;

#ifndef FINALPROJECT_TYPE2_H
#define FINALPROJECT_TYPE2_H

class Type2 : public Enemy {
protected:
    string lowOrHigh;
    int numMissiles = 10, numBombs = 5;
public:
    Type2(string n, int x_pos, string lOrH, int s, double w, double h);
    Type2();
    void setLowOrHigh(string lOrH);
    void move_position();
    void fire_weapon();
    void update_status();
};

#endif //FINALPROJECT_TYPE2_H
