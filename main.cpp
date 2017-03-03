//
// Created by user on 3/2/17.
//
#include <iostream>
#include <string>

#include "BMI.h"
#include "Schools.h"
#include "Athlete.h"
#include "Record.h"

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

    int Wins;
    int Loses;
    int Ties;
    string Medals;


    //Ask for Athlete Name, Age, & Gender
    cout << "Enter your name: ";
    getline(cin, athleteName);
    cout << "Enter your Gender (M/F): ";
    cin >> athleteGender;
    cout << "Enter your Age: ";
    cin >> athleteAge;
    cin.ignore(1);

    //Ask for Athlete School Information
    cout << "Enter your School Name: ";
    getline(cin, schoolName);
    cout << "Enter the street name of your school address: ";
    getline(cin, streetName);
    cout << "Enter your the city: ";
    getline(cin,city);
    cout << "Enter the state: ";
    getline(cin, state);
    cout << "Enter the building number of your school address: ";
    cin >> buildingNum;
    cout << "Enter the Zip Code: ";
    cin >> zipCode;

    //Ask for Athlete BMI
    cout << "Enter your Height (in feet, no symbol required): ";
    cin >> height;
    cout << "Enter your weight: ";
    cin >> weight;

    //Ask for Athlete Records
    cout << "How many Wins do you have this Season? ";
    cin >> Wins;
    cout << "How Many Loses do you have this Season? ";
    cin >> Loses;
    cout << "How many ties do you have this Season? ";
    cin >> Ties;
    cout << "What is the most recent Medal you have received? "
            "(Bronze, Silver, Gold): ";
    cin >> Medals;



    //Print Athlete Info

    Athlete Classification_1(athleteName, athleteGender, athleteAge);

    cout << endl << "Athlete Name: " << Classification_1.getAthleteName() << endl
         << "Athlete Age: " << Classification_1.getAtheleteAge() << endl
         << "Athlete Gender: " << Classification_1.getAthleteGender() << endl;

    Schools Represent_1(schoolName, streetName, city, state, buildingNum, zipCode);

    cout << endl << "School Name: " << Represent_1.getSchoolname() << endl <<
         "Address: " << Represent_1.getBuildingNum() << " " << Represent_1.getStreetName() << " " <<
         Represent_1.getCity() << " " << Represent_1.getState() << ", " << Represent_1.getZipcode()
         << "." << endl;

    BMI Build_1 (height, weight);

    cout << endl << "Height: " << Build_1.getHeight() << endl <<
         "Weight: " << Build_1.getWeight() << endl;

    Record Rank_1 (Wins, Loses, Ties, Medals);

    cout << endl << "Wins: " << Rank_1.getWins() << endl <<
           "Loses: " << Rank_1.getLoses() << endl <<
           "Ties: "  << Rank_1.getTies() << endl <<
           "Medals: " << Rank_1.getMedals() << endl;

    return 0;
}

