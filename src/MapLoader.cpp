//The implementation file for maploader.h

#include "MapLoader.h"
#include <fstream>

Map MapLoader::load(string mapName)
{
    fstream file(mapName);
    cout << "Loading up a map skeleton\n";
    string data;

    // Get all of the data into the class objects
    Map mapOne;

    if (!file.is_open())
    {
        cout << "ERROR: File " << mapName << " does failed to open\n";
        mapOne.setName("NULL");
        return mapOne;
    }

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
            //Error check
            if (count != 0)
            {
                mapOne.setName("NULL");
                cout << "ERROR: incorrect amount of bases\n";
                return mapOne;
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
            //Error check
            if (count != 0)
            {
                mapOne.setName("NULL");
                cout << "ERROR: incorrect amount of map objects\n";
                return mapOne;
            }
        }
        //NoFlyZones are are similar but have no id or type
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
            //Error check
            if (count != 0)
            {
                mapOne.setName("NULL");
                cout << "ERROR: incorrect amount of no fly zones\n";
                return mapOne;
            }
        }
        else {
            cout << data << endl;
        }
    }

    file.close();

    return mapOne;
}