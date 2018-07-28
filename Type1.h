//
// Created by JSS19 on 5/15/2018.
//

#include <string>
#include "Enemy.h"

using namespace std;

#ifndef FINALPROJECT_TYPE1_H
#define FINALPROJECT_TYPE1_H

class Type1 : public Enemy {
public:
    Type1(string n, int x_pos, int s, double w, double h);
    Type1();
    void move_position();
    void fire_weapon();
    void update_status();
};


#endif //FINALPROJECT_TYPE1_H
