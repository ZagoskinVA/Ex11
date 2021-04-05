// Copyright 2021 Vlad
#ifndef INCLUDE_CAGE_H_
#define INCLUDE_CAGE_H_
#include <iostream>

class Cage {
 private:
    bool light;
 public:
    Cage* next;
    Cage* previous;
    Cage() : next(nullptr), previous(nullptr) {
        light = std::rand() % 2 == 1;
    }
    void on() { light = true; }
    void off() { light = false; }
    bool get() const { return light; }
};
#endif  // INCLUDE_CAGE_H_
