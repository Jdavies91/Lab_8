//
// Created by Owner on 2019-03-25.
//

#ifndef LAB_8_V2_PERSON_HPP
#define LAB_8_V2_PERSON_HPP

#include <map>
#include <string>
using namespace std;

class Person {
public:
Person()= default;

void  setPerson(string p);
void  setvistedplace(string place,int count);

    const string &getPerson() const;

    const map<int, string> &getPlacevisted() const;

private:
    string person;
    map<int, string> placevisted;
    int count;

};


#endif //LAB_8_V2_PERSON_HPP
