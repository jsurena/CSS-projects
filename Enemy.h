//
// Created by JSS19 on 5/15/2018.
//

#include <string>

using namespace std;

#ifndef FINALPROJECT_ENEMY_H

#define FINALPROJECT_ENEMY_H

class Enemy {
protected:
    string name;
    int x_position, y_position, status;
    double width, height;
public:
    int getX_Position();
    int getY_Position();
    int getStatus();
    double getWidth();
    double getHeight();
    string getName();

    void setName(string n);
    void setX_Position(int x);
    void setY_Position(int y);
    void setStatus(int s);
    void setWidth(double w);
    void setHeight(double h);

    virtual void move_position() = 0;
    virtual void fire_weapon() = 0;
    virtual void update_status() = 0;
};

#endif //FINALPROJECT_ENEMY_H
