#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <functional>
#include <set>
#include "placingPeopleandPlacesfromfile.hpp"
#include "Person.hpp"
using namespace std;

int main() {
    placingPeopleandPlacesfromfile p;
    string filename ="peoplePlaces.txt";
    p.readfromfile(filename);
    p.sort(p);
    p.vistedTavernKrusty();
}