// Copyright 2021 Vlad
#include "Train.h"

void Train::addCage()
{
    Cage* elm = new Cage();
    if (last) {
        elm->next = last;
        last->previous = elm;
    } else {
        first = elm;
    }
    elm->previous = first;
    first->next = elm;
    last = elm;
}

void Train::printState()
{
    Cage* temp = first;
    if (first) {
        do {
            std::cout << temp->get() << std::endl;
            temp = temp->next;
        } while (temp != first);
    }

}

int Train::findLenght()
{
    int count = 0;
    int lenght = 0;
    Cage* temp;
    if (!first)
        return lenght;
    first->off();
    temp = first->next;
    while (true) {
        if (!temp)
            throw "Не зацикленный список";
        count++;
        if (!temp->get()) {
            temp->on();
            lenght = count;
            for (int i = 0; i < count; i++) {
                temp = temp->previous;
            }
            if (temp->get())
                return lenght;
            count = 0;
        }
        temp = temp->next;
    }
}
