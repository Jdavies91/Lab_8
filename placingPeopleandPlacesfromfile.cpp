//
// Created by Owner on 2019-03-26.
//

#include <sstream>
#include <fstream>
#include <functional>
#include <set>
#include "placingPeopleandPlacesfromfile.hpp"
#include <iostream>
using namespace std;

void placingPeopleandPlacesfromfile::readfromfile(string filename) {
    string name;
    string line="";
    string word;

    int count = -1;
    int indexforplaces = 0, indexforperson =0;
    Person *p;
    ifstream fin;
    fin.open("../"+filename);
    while(getline(fin, line)){
        stringstream iss(line);

        p= new Person();
        while(iss>>word) {
            if(count<0){
                name = word;
                // cout<< word;
                p->setPerson(name);
            }else {
                //   cout<< word;
                p->setvistedplace(name,word);
            }
            count++;

        }

        count = -1;
        peoplewhovisted.insert(pair<Person*,int>(p,indexforperson));
        indexforperson++;
    }

}

const multimap<Person*, int> &placingPeopleandPlacesfromfile::personname() const {
    return peoplewhovisted;
}

int placingPeopleandPlacesfromfile::peoplesizemap() {
    return peoplewhovisted.size();
}
void placingPeopleandPlacesfromfile::sort(placingPeopleandPlacesfromfile p) {

    typedef std::function<bool(std::pair<Person*, int>, std::pair<Person*, int>)> Comparator;

    Comparator compFunctor =
            [](std::pair<Person*, int> elem1 ,std::pair<Person*, int> elem2)
            {
                return elem1.first->getPerson() < elem2.first->getPerson();
            };
    std::set<std::pair<Person*, int>, Comparator> setOfpeopple(
            p.personname().begin(), p.personname().end(), compFunctor);

    for (std::pair<Person*, int> element : setOfpeopple)
        cout << element.first->getPerson()<<endl;

}
void placingPeopleandPlacesfromfile::vistedTavernKrusty(){
    for(map<Person*, String>::const_iterator it = peoplewhovisted.begin();
        it != peoplewhovisted.end(); ++it)
    {
        std::cout << it->first->getPerson();
        std::cout << it->;
    }
}