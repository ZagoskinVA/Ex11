// Copyright 2021 Vlad
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_
#include "Cage.h"

class Train
{
 private:
    Cage* first;
    Cage* last;
 public:
    Train() : first(nullptr), last(nullptr) {}
    void addCage();
    void printState();
    int findLenght();
};
#endif  // INCLUDE_TRAIN_H_
