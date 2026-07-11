

//For now the goal will be just to read from the json file and then print that to the console


#include <nlohmann\json.hpp>
#include <string>
#include <iostream>
#include <fstream>

using json = nlohmann::json;

using namespace std;

int main() {
    cout << "Loading json from starting.json";
    ifstream file("../../assets/maps/starting.json");

    json data;

    cout << data.dump(4) << endl;


}

