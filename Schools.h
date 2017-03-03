//
// Created by user on 3/3/17.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef PROJECT1_WEIGHTCLASSES_H
#define PROJECT1_WEIGHTCLASSES_H


class Schools {
public:
    //
    Schools();


    //
   // Schools(string, int);

    Schools(string schoolName, string streetName, string city, string state, int buildingNum, int zipCode);

    //
    ~Schools();

    //Accessor
    string getSchoolname();
    string getStreetName();
    string getCity();
    string getState();

    int getBuildingNum();
    int getZipcode();

private:
    //Members
    string newSchoolName,
            newStreetName, newCity, newState;
    int newBuildingNum, newZipCode;

};


#endif //PROJECT1_WEIGHTCLASSES_H
