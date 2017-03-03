//
// Created by user on 3/2/17.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef PROJECT1_BMI_H
#define PROJECT1_BMI_H

class BMI {
public:
    //Default Constructor
    BMI();

    //Overload Constructor
    BMI(int, double);

    //Destructor
    ~BMI();

    //Accessor Functions (return member variables)
  //  string getName()  const;
        //getName - returns name of patient

    int getHeight() const;
        // getHeight - returns height of patient

    double getWeight() const;
        // getWeight - returns weight of patient

private:
    //Member variables
    int newHeight;
    double newWeight;

};


#endif //PROJECT1_BMI_H
