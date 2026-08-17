// This file will contain the obstacles class

#ifndef OBSTACLE_H
#define OBSTACLE_H

using namespace std;
#include <string>

class Obstacle
{

private:
    string type;
    int x;
    int y;
    int radius;

public:
    string getType() { return type; };
    int getX() { return x; };
    int getY() { return y; };
    int getRadius() { return radius; };

    void setType(string t) { type = t; };
    void setX(int xc) { x = xc; };
    void setY(int yc) { y = yc; };
    void setRadius(int r) { radius = r; };
};

#endif // OBSTACLE_H