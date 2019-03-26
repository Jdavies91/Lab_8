#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include "placingPeopleandPlacesfromfile.hpp"
#include "Person.hpp"
using namespace std;

int main() {
    placingPeopleandPlacesfromfile p;
    string filename ="peoplePlaces.txt";
    p.readfromfile(filename);
    cout<<p.people().at(5)->getPerson();




    return 0;
}