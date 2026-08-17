//For now the goal will be just to read from txt file and then print that to the console
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream file("../assets/maps/starting.txt");

    cout << "Hello Mission Control Suite\n";

    if (!file) {
        cout << "File does not exist\n";
        return 1;
    }

    string data;

    while (file >> data)
    {
        cout << data << endl;
    }

    file.close();

    return 0;
}

