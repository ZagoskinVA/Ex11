// Copyright 2021 Vlad
#include "Train.h"
#include <iostream>

int main() {
    Train train;
    for (int i = 0; i < 7432; i++) {
        train.addCage();
    }
    std::cout << "Lenght: " << train.findLenght() << std::endl;
}
