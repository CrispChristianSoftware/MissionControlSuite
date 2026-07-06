//This file will contain the obstacles class

#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <string>
class Obstacle {

    private:
        string type;
        int x;
        int y;
        int height;
        int width;
        int radius;
    public:
        string getType() { return type; };
        int getX() { return x; };
        int getY() { return y; };
        int getHeight() { return height; };
        int getWidth() { return width; };
        int getRadius() { return radius; };
};

#endif OBSTACLE_H