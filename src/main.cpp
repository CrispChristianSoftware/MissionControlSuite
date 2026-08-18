// For now the goal will be just to read from txt file and then print that to the console
#include <string>
#include <iostream>
#include "terrain/Map.h"
#include "MapLoader.h"

using namespace std;

int main()
{
    string mapName = "../assets/maps/starting.txt";
    cout << "Hello Mission Control Suite\n";
    cout << "Loading up a map skeleton\n";
    Map mapOne = MapLoader::load(mapName);

    if (mapOne.getName() == "NULL")
    {
        cout << "Map Failure!\n";
    }

    cout << "\nThe map name is " << mapOne.getName()
         << " map, it is " << mapOne.getHeight() << " high by "
         << mapOne.getWidth() << " wide" << endl;

    return 0;
}
