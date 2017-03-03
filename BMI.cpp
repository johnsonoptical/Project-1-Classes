//
// Created by user on 3/2/17.
//

#include "BMI.h"

BMI::BMI() {
    newHeight = 0;
    newWeight = 0.0;
}

BMI::BMI(int height, double weight) {
    newHeight = height;
    newWeight = weight;
}

BMI::~BMI() {

}

int BMI::getHeight() const {
    return newHeight;
}

double BMI::getWeight() const {
    return newWeight;
}
