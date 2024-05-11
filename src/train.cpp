// Copyright 2021 NNTU-CS
#include "train.h"
TrainNew::TrainNew() {
    firstCage = nullptr;
    stepsCount = 0;
}

void TrainNew::addCage(bool bulbState) {
    CageNew* newCage = new CageNew;
    newCage->bulbOn = bulbState;
    if (firstCage == nullptr) {
        firstCage = newCage;
        firstCage->nextCage = firstCage;
        firstCage->prevCage = firstCage;
    } else {
        CageNew* lastCage = firstCage->prevCage;
        lastCage->nextCage = newCage;
        newCage->prevCage = lastCage;
        newCage->nextCage = firstCage;
        firstCage->prevCage = newCage;
    }
    stepsCount++;
}

int TrainNew::getTrainLength() {
    if (firstCage == nullptr) return 0;
    int length = 0;
    CageNew* currentCage = firstCage;
    do {
        length++;
        currentCage = currentCage->nextCage;
    } while (currentCage != firstCage);
    return length;
}

int TrainNew::getStepsCount() {
    return stepsCount;
}
