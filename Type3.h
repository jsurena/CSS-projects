//
// Created by JSS19 on 5/15/2018.
//

#include <string>
#include "Enemy.h"

using namespace std;

#ifndef FINALPROJECT_TYPE3_H
#define FINALPROJECT_TYPE3_H

class Type3 : public Enemy {
private:
    int rifleAmmo = 15;
public:
    Type3(string n, int x_pos, int s, double w, double h);
    Type3();
    void move_position();
    void fire_weapon();
    void update_status();
};

#endif //FINALPROJECT_TYPE3_H
