//For now the goal will be just to read from txt file and then print that to the console
#include <string>
#include <iostream>
#include <fstream>
#include "terrain/Map.h"

using namespace std;

int main() {
    fstream file("../assets/maps/starting.txt");

    cout << "Hello Mission Control Suite\n";
    cout << "Loading up a skeleton\n";

    if (!file) {
        cout << "File 'starting map' does not exist\n";
        return 1;
    }

    string data;

    //Get all of the data into the class objects
    Map mapOne;
    while (file >> data)
    {
        //Map name and dimensions
        if (data == "name") {
            string name;
            file >> name;
            mapOne.setName(name);
        }
        else if (data == "mapWidth")
        {
            int w;
            file >> w;
            mapOne.setWidth(w);
        }
        else if (data == "mapHeight")
        {
            int h;
            file >> h;
            mapOne.setHeight(h);
        } else {
                    cout << data << endl;
        }
    }

    file.close();

    cout << "\nThe map name is " << mapOne.getName() 
        << " map, it is " << mapOne.getHeight() << " high by " 
        << mapOne.getWidth() << " wide" << endl;


    return 0;
}

