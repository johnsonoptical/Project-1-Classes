//
// Created by user on 3/3/17.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef PROJECT1_RECORD_H
#define PROJECT1_RECORD_H


class Record {
public:
    //
    Record();

    //
    Record(int Wins, int Loses, int Ties, string Medals);

    //
    ~Record();

    //
    int getWins();
    int getLoses();
    int getTies();
    string getMedals();

private:
    int newWins, newLoses, newTies;
    string newMedals;
};


#endif //PROJECT1_RECORD_H
