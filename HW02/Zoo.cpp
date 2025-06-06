#include "Zoo.h"
#include "Animal.h"

void Zoo::addAnimal(Animal* animal) {
	animals[animalCount] = animal;
	animalCount++;
}
void Zoo::performActions() {
	for (int i = 0; i < animalCount; i++)
	{
		animals[i]->makeSound();
	}
}