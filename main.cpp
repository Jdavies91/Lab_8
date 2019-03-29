#include <iostream>
#include "placingPeopleandPlacesfromfile.hpp"
#include "Person.hpp"
using namespace std;

int main() {
    // creates class object for the placing people and places from file
    placingPeopleandPlacesfromfile p;
    // text file name of information we are pulling from
    string filename ="peoplePlaces.txt";
    //Reads in the file and puts file in object
    p.readfromfile(filename);
    // Sorts the Names of the people in the list
    p.sort(p);
    // outputs the people who visted krusty burger and tavern
    p.vistedTavernKrusty();
    // outputs the people who didn't vist home and krusty burger
    p.didntvistHomeKrusty();
    // outputs didn't vist the tavern and home but visted krusty burger and school
    p.didntvistTHandVistKBS();
    //ouputs the  people who didn't vist all the the locations
    p.didntvistedAllLocation();
}