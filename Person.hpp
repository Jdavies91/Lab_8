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
void  setvistedplace(string person,string place);

    const string &getPerson() const;
    int sizevistedplace();
    map<string, string> getPlacevisted();
    void vistedTavernKrusty();


private:
    string person;
    map<string, string> placevisted;


};


#endif //LAB_8_V2_PERSON_HPP
