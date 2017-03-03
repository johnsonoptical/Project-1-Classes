//
// Created by user on 3/3/17.
//

#include "Schools.h"

Schools::Schools() {
  //  newSchoolName ;
    //newStreetName ;
    //newCity;
    //newState;
    newBuildingNum = 0;
    newZipCode = 0;

}

Schools::Schools (string schoolName, string streetName, string city, string state,
                 int buildingNum, int zipCode)
{
    newSchoolName = schoolName;
    newStreetName = streetName;
    newCity = city;
    newState = state;
    newBuildingNum = buildingNum;
    newZipCode = zipCode;
}

Schools::~Schools() {

}

string Schools::getSchoolname() {
    return newSchoolName;
}

string Schools::getStreetName() {
    return newStreetName;
}

string Schools::getCity() {
    return newCity;
}

string Schools::getState() {
    return newState;
}

int Schools::getBuildingNum() {
    return newBuildingNum;
}

int Schools::getZipcode() {
    return newZipCode;
}