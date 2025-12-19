#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream myFile;

    myFile.open("data.txt", ios::out);
    myFile << "Hello, World!";

    myFile.close();
}
