//This is the person class this class holds thep erson and the people visted the place
// Created by Jonathan Davies on 2019-03-25.
//


#include "Person.hpp"

//Pre Brings in a string for person
//post set person string to person string member
//Return Void
void Person::setPerson(string p) {
    person=p;

}
//Pre Brings in a index and a string of places for that object
//post Sorts all the People in the text people and out puts them
//Return Void
void Person::setvistedplace(int index,string place) {
    placevisted.insert(pair<int,string>(index,place));
}
//Pre n/a
//post Returns a string of the person name
//Return string
const string &Person::getPerson() const {
    return person;
}
//Pre Brings in place1 which is a string and place 2 which is a string and if all the location fs need a bool
//post Sorts all the People in the text people and out puts them
//Return bool
bool Person::getVisted(pair<Person*, int> p,string place1, string place2, bool all){

    int count = 0;
    int allcount = 0;
    for (auto  element : p.first->getPlacevisted()) {
        if(element.second==place1||element.second==place2){
            count++;
        }
        allcount++;
    }
    if(all){
        if(allcount==4){
            return false;
        }
    }
     if(count==2)
         return true;

    return false;
}
//Pre bring in a string of place 1 and place 2 and a pair of p
//post reutrns a bool
//Return bool
bool Person::getDidntVisted(pair<Person*, int> p,string place1, string place2){
    int count = 0;
    for (auto  element : p.first->getPlacevisted()) {
        if(element.second==place1||element.second==place2){
            count++;
        }
    }
    if(count==0)
        return true;

    return false;
}
//Pre n/a
//post reutrns an map of the visted places from people
//Return map
const map<int, string> &Person::getPlacevisted() const {
    return placevisted;
}
