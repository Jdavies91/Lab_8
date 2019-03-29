//
// Created by Owner on 2019-03-25.
//

#ifndef LAB_8_V2_PERSON_HPP
#define LAB_8_V2_PERSON_HPP

#include <map>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class Person {
    // all my public header functions and member for person
public:
Person()= default;
void  setPerson(string p);
void  setvistedplace(int index,string place);
const string &getPerson() const;
int sizevistedplace();
bool getDidntVisted(pair<Person*, int> s,string place1, string place2);
bool getVisted(pair<Person*, int> s,string place1, string place2,bool all);
const map<int, string> &getPlacevisted() const;

    // all my private header functions and member for the person
private:
    string person;
    map<int, string> placevisted;


};


#endif //LAB_8_V2_PERSON_HPP
