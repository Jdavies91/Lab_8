//
// Created by Owner on 2019-03-26.
//

#ifndef LAB_8_V2_PLACINGPEOPLEANDPLACESFROMFILE_HPP
#define LAB_8_V2_PLACINGPEOPLEANDPLACESFROMFILE_HPP
#include <string>
#include <map>
#include "Person.hpp"

using namespace std;

class placingPeopleandPlacesfromfile {
    // all my public header functions and member
public:
    void readfromfile(string filename);
    const multimap<Person*, int> &personname() const;
    void sort(placingPeopleandPlacesfromfile p);
    void vistedTavernKrusty();
    void didntvistHomeKrusty();
    void didntvistTHandVistKBS();
    void didntvistedAllLocation();
    char abervation(string word);
    // all my private header functions and member
private:
    multimap<Person*,int> peoplewhovisted;

};


#endif //LAB_8_V2_PLACINGPEOPLEANDPLACESFROMFILE_HPP
