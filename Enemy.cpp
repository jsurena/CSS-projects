//
// Created by JSS19 on 5/15/2018.
//

#include "Enemy.h"

using namespace std;

int Enemy::getX_Position() {
    return x_position;
}
int Enemy::getY_Position() {
    return y_position;
}
int Enemy::getStatus() {
    return status;
}
double Enemy::getWidth() {
    return width;
}
double Enemy::getHeight() {
    return height;
}
string Enemy::getName() {
    return name;
}

void Enemy::setName(string n) {
    name = n;
}
void Enemy::setX_Position(int x) {
    x_position = x;
}
void Enemy::setY_Position(int y) {
    y_position = y;
}
void Enemy::setStatus(int s) {
    status = s;
}
void Enemy::setWidth(double w) {
    width = w;
}
void Enemy::setHeight(double h) {
    height = h;
}


