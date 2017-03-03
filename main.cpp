//
// Created by user on 3/2/17.
//
#include <iostream>
#include <string>

#include "BMI.h"
#include "Schools.h"
#include "Athlete.h"

using namespace std;

int main() {

    string athleteName;
    char athleteGender;
    int athleteAge;

    int height;
    double weight;

    string schoolName;
    string streetName;
    string city;
    string state;
    int buildingNum;
    int zipCode;


    //Ask for Athlete Name, Age, & Gender
    cout << "Enter your name: ";
    cin >> athleteName;
    cout << "Enter your Gender (M/F): ";
    cin >> athleteGender;
    cout << "Enter your Age: ";
    cin >> athleteAge;

    //Ask for Athlete School Information
    cout << "Enter your School Name: ";
    cin >> schoolName;
    cout << "Enter your school address street name: ";
    cin >> streetName;
   // cin.ignore();
    cout << "Enter your the city: ";
    cin >> city;
 //   cin.ignore();
    cout << "Enter the state: ";
    cin >> state;
//    cin.ignore();
    cout << "Enter the building number on your school address: ";
    cin >> buildingNum;
    cout << "Enter the Zip Code: ";
    cin >> zipCode;

    //Ask for Athlete BMI
    cout << "Enter your Height (in inches): ";
    cin >> height;
    cout << "Enter your weight (in pounds): ";
    cin >> weight;




    //Print Athlete Info

    Athlete Classification_1(athleteName, athleteGender, athleteAge);

    cout << endl << "Athlete Name: " << Classification_1.getAthleteName() << endl
         << "Athlete Age: " << Classification_1.getAtheleteAge() << endl
         << "Athlete Gender: " << Classification_1.getAthleteGender() << endl;

    Schools Athlete_1(schoolName, streetName, city, state, buildingNum, zipCode);

    cout << endl << "School Name: " << Athlete_1.getSchoolname() << endl <<
         "Address: " << Athlete_1.getBuildingNum() << " " << Athlete_1.getStreetName() << " " <<
         Athlete_1.getCity() << " " << Athlete_1.getState() << ", " << Athlete_1.getZipcode()
         << "." << endl;

    BMI Athlete_2 (height, weight);

    cout << endl << "Height: " << Athlete_2.getHeight() << endl <<
         "Weight: " << Athlete_2.getWeight() << endl;

    return 0;
}

