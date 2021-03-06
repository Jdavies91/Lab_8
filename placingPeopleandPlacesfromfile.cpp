//This Class puts all the people in the text file and puts them in a person object.
// Created by Jonathan Davies on 2019-03-26.
//

#include <sstream>
#include <fstream>
#include <functional>
#include <set>
#include "placingPeopleandPlacesfromfile.hpp"
#include <iostream>
using namespace std;

//Pre Brings in the file name in a string
//post puts information in a object with name and places
//Return Void
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
                p->setvistedplace(count,word);
            }
            count++;

        }

        count = -1;
        peoplewhovisted.insert(pair<Person*,int>(p,indexforperson));
        indexforperson++;
    }

}
//Pre n/a
//post returns the people in a map
//Return Map
const multimap<Person*, int> &placingPeopleandPlacesfromfile::personname() const {
    return peoplewhovisted;
}

//Pre n/a
//post Post who all went to krusty burger and tavern
//Return Void
void placingPeopleandPlacesfromfile::vistedTavernKrusty(){
    Person p;
    cout<<"\nVisted both Krusty-Burger and Tavern\n";
    for (std::pair<Person*, int> element :peoplewhovisted) {

        //cout<<element.first->getPerson()<<endl;
        if(p.getVisted(element,"Krusty-Burger","Tavern",false)){

            cout<<element.first->getPerson()<<endl;
        }
    }

}
//Pre n/a
//post Post who all went to krusty burger and Home
//Return Void
void placingPeopleandPlacesfromfile::didntvistHomeKrusty(){
    Person p;
    cout<<"\nDidn't  go Krusty-Burger and Home";
    for (std::pair<Person*, int> element :peoplewhovisted) {

        //cout<<element.first->getPerson()<<endl;
        if(p.getDidntVisted(element,"Krusty-Burger","Home")){

            cout<<element.first->getPerson()<<endl;
        }
    }

}
//Pre n/a
//post Ouput the people who didn't vist the tavern and home but visted krustby burgery and school
//Return Void

void placingPeopleandPlacesfromfile::didntvistTHandVistKBS(){
    Person p;
    cout<<"\nDidn't go to the Tavern and Home but visted Krusty-burger and school\n";
    for (std::pair<Person*, int> element :peoplewhovisted) {

        //cout<<element.first->getPerson()<<endl;
        if(p.getDidntVisted(element,"Tavern","Home")&&p.getVisted(element,"Krusty-Burger","School",false)){

            cout<<element.first->getPerson()<<endl;
        }
    }

}
//Pre n/a
//post all the people who didn't vist all location
//Return Void
void placingPeopleandPlacesfromfile::didntvistedAllLocation(){
    Person p;
    cout<<"\nRemoved everyone who went to every location\n";
    for (std::pair<Person*, int> element :peoplewhovisted) {

        //cout<<element.first->getPerson()<<endl;
        if(p.getVisted(element,"Krusty-Burger","School",true)){

            cout<<element.first->getPerson()<<endl;
        }
    }

}
//Pre n/a
//post Sorts all the People in the text people and out puts them
//Return Void
void placingPeopleandPlacesfromfile::sort(placingPeopleandPlacesfromfile p) {
    cout<<"Full sorted list";
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