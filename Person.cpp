//
// Created by Owner on 2019-03-25.
//

#include "Person.hpp"

void Person::setPerson(string p) {
    person=p;

}
void Person::setvistedplace(string place,int count) {
    placevisted.insert(pair<int,string>(count, place));
}

const string &Person::getPerson() const {
    return person;
}

const map<int, string> &Person::getPlacevisted() const {
    return placevisted;
}
