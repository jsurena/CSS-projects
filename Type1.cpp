//
// Created by JSS19 on 5/15/2018.
//

#include <iostream>
#include <string>
#include "Type1.h"
#include <cstdlib>

using namespace std;

Type1::Type1(string n, int x_pos, int s, double w, double h) {
    name = n;
    x_position = x_pos;
    y_position = 500;
    status = s;
    width = w;
    height = h;
}
Type1::Type1() {
    name = "";
    x_position = 0;
    y_position = 500;
    status = 0;
    width = 0;
    height = 0;
}

void Type1::move_position() {
    if (rand()%2 == 1) {
        x_position += 3;
    }
    else {
        x_position -= 3;
    }
    cout << getName() << " moves to position (" << x_position << ", " << y_position << ")   ";
}

void Type1::fire_weapon() {
    if (rand()%2 == 1) {
        if (rand()%3 == 0) {
            cout << getName() << " bites the enemy's leg." << endl;
        }
        else if (rand()%3 == 1) {
            cout << getName() << " bites the enemy's arm." << endl;
        }
        else if (rand()%3 == 2) {
            cout << getName() << " bites the enemy's neck." << endl;
        }
    }
    else {
        if (rand()%3 == 0) {
            cout << getName() << " slashes the enemy's leg." << endl;
        }
        else if (rand()%3 == 1) {
            cout << getName() << " slashes the enemy's arm." << endl;
        }
        else if (rand()%3 == 2) {
            cout << getName() << " slashes the enemy's neck." << endl;
        }
    }

}

void Type1::update_status() {
    if (status > 0) {
        status--;
        if (status > 0) {
            cout << getName() << " update status: I've been hit: " << status << "points remaining. "
                    "(Bark)" << endl;
        }
        else {
            cout << getName() << " update status: I've been hit: " << status << "points remaining. "
                    "(Dead)" << endl;
        }
    }
}