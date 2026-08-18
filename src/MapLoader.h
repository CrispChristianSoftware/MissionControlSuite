//This file with load in the map files into a map object
#ifndef MAPLOADER_H
#define MAPLOADER_H

#include <iostream>
#include "terrain/Map.h"
#include <string>

class MapLoader {
    public: 
        static Map load(std::string mapName);
};

#endif //MAPLOADER_H