#include <iostream>
#include "Json.hpp"
#include <unordered_map>
using namespace std;

int main() {
    nlohmann:: json person;
    person["ID123"] = "Anthony";
    person["ID456"] = "Daniel";

    cout << person["ID123"].get<std::string>() << endl;
    cout << person["ID456"].get<std::string>() << endl;

    unordered_map<string, int> Classtestscore;
    Classtestscore["Anthony"] = 100;
    Classtestscore["Daniel"] = 99;
    Classtestscore["Blake"] = 88;

    cout << "Blake: " << Classtestscore["Blake"] << endl;
    cout <<  "Anthony: "<< Classtestscore["Anthony"] << endl;
    cout << "Daniel: " << Classtestscore["Daniel"] << endl;

    return 0;
}