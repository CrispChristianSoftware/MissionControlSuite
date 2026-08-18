// This file will contain the base class

#ifndef BASE_H
#define BASE_H

class Base
{
private:
    int id;
    int x;
    int y;
    int radius;

public:
    int getId() { return id; };
    int getX() { return x; };
    int getY() { return y; };
    int getRadius() { return radius; };

    void setId(int i) { id = i; };
    void setX(int xc) { x = xc; };
    void setY(int yc) { y = yc; };
    void setRadius(int r) { radius = r; };
};

#endif // BASE_H