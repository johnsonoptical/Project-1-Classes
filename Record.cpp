//
// Created by user on 3/3/17.
//

#include "Record.h"

Record::Record() {
    newWins= 0;
    newLoses= 0;
    newTies= 0;
}

Record::Record(int Wins, int Loses, int Ties, string Medals) {

    newWins = Wins;
    newLoses = Loses;
    newTies = Ties;
    newMedals = Medals;
}

Record::~Record() {

}

int Record::getWins() {
    return newWins;
}

int Record::getLoses() {
    return newLoses;
}

int Record::getTies() {
    return newTies;
}

string Record::getMedals() {
    return newMedals;
}