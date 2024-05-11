// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
private:
  struct Cage {
    bool light; 
    Cage *next;
    Cage *prev;
  };
  int countOp; 
  Cage *first; 
public:
  Train();
  void addCage(bool light);
  int getLength();         
  int getOpCount();         
};

class TrainNew {
private:
  struct CageNew {
    bool bulbOn;
    CageNew *nextCage;
    CageNew *prevCage;
  };
  int stepsCount;
  CageNew *firstCage;
public:
  TrainNew();
  void addCage(bool bulbState);
  int getTrainLength();          
  int getStepsCount();
};

#endif  // INCLUDE_TRAIN_H_
