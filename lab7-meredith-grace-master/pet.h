#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>
using namespace std;

class Pet{
  int legs;
  bool tail;
  string species, name;

  public:
    Pet();
    Pet(string, string);
    
    void setLegs(int numLegs);
    int getLegs();
    void setTail(bool hasTail);
    bool getTail();
    void setSpecies(string speciesName);
    string getSpecies();
    void setName(string petName);
    string getName();

    friend ostream& operator<<(ostream &output, const Pet& other);
};

#endif