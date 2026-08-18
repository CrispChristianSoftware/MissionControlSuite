// For now the goal will be just to read from txt file and then print that to the console
#include <string>
#include <iostream>
#include "terrain/Map.h"
#include "MapLoader.h"

using namespace std;

int main()
{
    string mapName = "assets/maps/starting.txt";

    cout << "Hello Mission Control Suite\n";

    Map mapOne = MapLoader::load(mapName);

    if (mapOne.getName() == "NULL")
    {
        cout << "Map Loading Failure!\n";
        return 1;
    }

    cout << "\nThe map name is " << mapOne.getName()
         << " map, it is " << mapOne.getHeight() << " high by "
         << mapOne.getWidth() << " wide" << endl
         << "There are " << mapOne.bases.size() << " bases\n"
         << mapOne.obstacles.size() << " map objects and\n"
         << mapOne.noFlyZones.size() << " no fly zones\n";

    return 0;
}
