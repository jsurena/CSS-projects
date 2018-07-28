//
// Created by JSS19 on 5/15/2018.
//

#include <iostream>
#include <string>
#include "Type3.h"
#include <cstdlib>

using namespace std;

Type3::Type3(string n, int x_pos, int s, double w, double h) {
    name = n;
    x_position = x_pos;
    y_position = 500;
    status = s;
    width = w;
    height = h;
}

Type3::Type3() {
    name = "";
    x_position = 0;
    y_position = 500;
    status = 0;
    width = 0;
    height = 0;
}

void Type3::move_position() {
    if (rand()%2 == 1) {
        x_position += 3;
    }
    else {
        x_position -= 3;
    }
    cout << getName() << " moves to position (" << x_position << ", " << y_position << ")   ";
}

void Type3::fire_weapon() {
    if (rifleAmmo > 0) {
        cout << getName() << " shoots a rifle at the enemy." << endl;
        rifleAmmo--;
    }
    else {
        cout << getName() << " has no more rifle ammo left to fire." << endl;
    }
}

void Type3::update_status() {
    if (status > 0) {
        status--;
        if (status > 0) {
            cout << getName() << " update status: I've been hit: " << status << "points remaining. "
                    "(Oof, Ouch, Owie!)" << endl;
        }
        else {
            cout << getName() << " update status: I've been hit: " << status << "points remaining. "
                    "(Dead)" << endl;
        }
    }
}

