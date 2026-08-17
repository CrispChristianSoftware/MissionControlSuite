
#include "Map.h"

int Map::getWidth() {
    return width;
}

int Map::getHeight() {
    return height;
}

string Map::getName() {
    return name;
}

void Map::setWidth(int w) {
    width = w;
}

void Map::setHeight(int h) {
    height = h;
}

void Map::setName(string n) {
    name = n;
}