//
// Created by user on 3/3/17.
//

#include "Athlete.h"

Athlete::Athlete() {
}

Athlete::Athlete(string athleteName, char athleteGender, int athleteAge) {
    newAthleteName = athleteName;
    newAthleteGender = athleteGender;
    newAthleteAge = athleteAge;
}

Athlete::~Athlete() {

}

string Athlete::getAthleteName() {
    return newAthleteName;
}

char Athlete::getAthleteGender() {
    return newAthleteGender;
}

int Athlete::getAtheleteAge() {
    return newAthleteAge;
}