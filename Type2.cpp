//
// Created by JSS19 on 5/15/2018.
//

#include <iostream>
#include <string>
#include "Type2.h"
#include <cstdlib>

using namespace std;

Type2::Type2(string n, int x_pos, string lOrH, int s, double w, double h) {
    name = n;
    x_position = x_pos;
    if (lOrH == "low") {
        y_position = 300;
    }
    else if (lOrH == "high") {
        y_position = 100;
    }
    status = s;
    width = w;
    height = h;
}

Type2::Type2() {
    name = "";
    x_position = 0;
    y_position = 0;
    status = 0;
    width = 0;
    height = 0;
}

void Type2::setLowOrHigh(string lOrH) {
    lowOrHigh = lOrH;
    if (lOrH == "low") {
        y_position = 300;
    }
    else if (lOrH == "high") {
        y_position = 100;
    }
}

void Type2::move_position() {
    if (rand()%4 == 0) {
        x_position += 15;
    }
    else if (rand()%4 == 1) {
        x_position -= 15;
    }
    else if (rand()%4 == 2) {
        x_position += 30;
    }
    else if (rand()%4 == 3) {
        x_position -= 30;
    }
    cout << getName() << " flies to position (" << x_position << ", " << y_position << ")   ";
}

void Type2::fire_weapon() {
    if (rand()%2 == 1) {
        if (numMissiles > 0) {
            cout << getName() << " fires a missile at the enemy." << endl;
            numMissiles--;
        }
        else {
            cout << getName() << " has no more missiles left to fire." << endl;
        }
    }
    else {
        if (numBombs > 0) {
            cout << getName() << " fires bombs at the enemy." << endl;
            numBombs--;
        }
        else {
            cout << getName() << " has no more bombs left to fire." << endl;
        }
    }
}

void Type2::update_status() {
    if (status > 0) {
        status--;
        if (status > 0) {
            cout << getName() << " update status: I've been hit: " << status << "points remaining. "
                    "(Ping)" << endl;
        }
        else {
            cout << getName() << " update status: I've been hit: " << status << "points remaining. "
                    "(Dead)" << endl;
        }
    }
}
