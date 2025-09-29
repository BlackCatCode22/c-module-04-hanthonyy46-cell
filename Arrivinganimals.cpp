#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //C:/Users/BE129/CLionProjects/untitled\data files/arrivingAnimals.txt
    fstream myfile;
    myfile.open("C:/Users/BE129/CLionProjects/untitled/data files/arrivingAnimals.txt", ios:: in);//
    if (myfile.is_open()) {
        string line;
        while (getline(myfile, line)) {
            cout << line << endl;
        }
    }

    return 0;
}