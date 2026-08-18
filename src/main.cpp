// For now the goal will be just to read from txt file and then print that to the console
#include <string>
#include <iostream>
#include <fstream>
#include "terrain/Map.h"

using namespace std;

int main()
{
    fstream file("../assets/maps/starting.txt");
    cout << "Hello Mission Control Suite\n";
    cout << "Loading up a map skeleton\n";

    if (!file.is_open())
    {
        cout << "File 'starting map' does not exist\n";
        return 1;
    }

    string data;

    // Get all of the data into the class objects
    Map mapOne;
    while (file >> data)
    {
        // Map name and dimensions
        if (data == "name")
        {
            string name;
            int width, height;
            file >> name >> width >> height;
            mapOne.setName(name);
            mapOne.setWidth(width);
            mapOne.setHeight(height);
        }
        // All bases should should have a base id, an x cord, a y cord, and a radius
        else if (data == "bases")
        {
            int count;
            file >> count;

            while (count > 0)
            {
                Base base;
                int bid, x, y, r;
                file >> bid >> x >> y >> r;
                base.setId(bid);
                base.setX(x);
                base.setY(y);
                base.setRadius(r);

                //add to map base vector 
                mapOne.bases.push_back(base);

                count--;
            }
        }
        // Map objects are the same way but have a type instead of an id
        else if (data == "mapObjects")
        {
            int count;
            file >> count;

            while (count > 0)
            {
                Obstacle obstacle;
                string type;
                int x, y, r;
                file >> type >> x >> y >> r;
                obstacle.setType(type);
                obstacle.setX(x);
                obstacle.setY(y);
                obstacle.setRadius(r);

                //Add to the obstacles vector 
                mapOne.obstacles.push_back(obstacle);

                count --;
            }
        }
        else if (data == "noFlyZones")
        {
            int count;
            file >> count;
            while (count > 0)
            {
                NoFlyZone nfz;
                int x, y, r;
                file >> x >> y >> r;
                nfz.setX(x);
                nfz.setY(y);
                nfz.setRadius(r);

                //Add to the no fly zones
                mapOne.noFlyZones.push_back(nfz);

                count--;
            }
        }
        else {
            cout << data << endl;
        }
    }

    file.close();

    cout << "\nThe map name is " << mapOne.getName()
         << " map, it is " << mapOne.getHeight() << " high by "
         << mapOne.getWidth() << " wide" << endl;

    return 0;
}
