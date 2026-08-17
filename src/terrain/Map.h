// This will be the header file for the Map Class

#include <vector>
#include "Obstacle.h"
#include "Base.h"
#include "NoFlyZone.h"
using namespace std;

#ifndef MAP_H
#define MAP_H

class Map
{
public:
    int getWidth();
    int getHeight();
    string getName();

    void setHeight(int h);
    void setWidth(int w);
    void setName(string n);

    vector<Base> bases;
    vector<Obstacle> obstacles;
    vector<NoFlyZone> noFlyZones;

private:
    int width;
    int height;
    string name;
};

#endif // MAP_H