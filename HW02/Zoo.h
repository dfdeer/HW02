#ifndef ZOO_H_
#define ZOO_H_
#include "Animal.h"

class Zoo {
private:
    Animal* animals[10];
    int animalCount = 0;
public:
    void addAnimal(Animal* animal);
    void performActions();
};
#endif