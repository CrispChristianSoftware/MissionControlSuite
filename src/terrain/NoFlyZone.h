//This will be the noflyzone class

#ifndef NOFLYZONE_H
#define NOFLYZONE_H

class NoFlyZone 
{
    private:
        int x;
        int y;
        int radius;
    public:
        int getX() { return x; };
        int getY() { return y; };
        int getRadius() { return radius; };

        void setX(int xc) { x = xc; };
        void setY(int yc) { y = yc; };
        void setRadius(int r) { radius = r; };
};

#endif //NOFLYZONE_H