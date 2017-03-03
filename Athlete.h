//
// Created by user on 3/3/17.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef PROJECT1_ATHLETE_H
#define PROJECT1_ATHLETE_H


class Athlete {
public:
    //
    Athlete();

    //
    Athlete(string, char, int);

    //
    ~Athlete();

    //
    string getAthleteName();
    char getAthleteGender();
    int getAtheleteAge();

private:
    //
    string newAthleteName;
    char newAthleteGender;
    int newAthleteAge;

};


#endif //PROJECT1_ATHLETE_H
