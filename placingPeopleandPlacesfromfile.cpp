//
// Created by Owner on 2019-03-26.
//

#include <sstream>
#include <fstream>
#include "placingPeopleandPlacesfromfile.hpp"


void placingPeopleandPlacesfromfile::readfromfile(string filename) {
    string name;
    string line="";
    string word;
    string person;
    int count = 0;
    int indexforplaces = 0, indexforperson =0;
    Person *p;
    ifstream fin;
    fin.open("../"+filename);
    while(getline(fin, line)){
        stringstream iss(line);

        p= new Person();
        while(iss>>word) {
            if(count==0){
                // cout<< word;
                p->setPerson(word);
            }else {
                //   cout<< word;
                p->setvistedplace(word,indexforplaces);
            }
            count++;

        }

        count = 0;
        peoplewhovisted.insert(pair<int,Person*>(indexforperson,p));
        indexforperson++;
    }

}

const map<int, Person *> &placingPeopleandPlacesfromfile::people() const {
    return peoplewhovisted;
}
