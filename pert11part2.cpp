#include <iostream>
#include <fstream>

using namespace std;

int main() {
    fstream myFile;
    char karakter;
    string teks;

    myFile.open("data.txt", ios::in);
    while(!myFile.eof()) {
        myFile.get(karakter);
        teks += karakter;
    }

    cout << teks;
    myFile.close();
}
