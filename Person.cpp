//
// Created by Owner on 2019-03-25.
//

#include "Person.hpp"

void Person::setPerson(string p) {
    person=p;

}
void Person::setvistedplace(string person,string place) {
    placevisted.insert(pair<string,string>(place,person));
}
int Person::sizevistedplace() {
    return placevisted.size();
}
const string &Person::getPerson() const {
    return person;
}

map<string, string> Person::getPlacevisted(){

    return placevisted;

}


