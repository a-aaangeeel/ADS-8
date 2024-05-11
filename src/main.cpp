// Copyright 2022 NNTU-CS
#include <iostream>
#include "train.h"

int main() {
 Train train;
  int count = 60; 
  
  while (count--)
    train.addCage(false);

  std::cout << train.getLength() << std::endl;
  std::cout << train.getOpCount() << std::endl;
  
  TrainNew newTrain;
  count = 60;

  while (count--)
    newTrain.addCage(false);

  std::cout << "Длина поезда: " << newTrain.getTrainLength() << std::endl;
  std::cout << "Число переходов: " << newTrain.getStepsCount() << std::endl;

  return 0;
}
