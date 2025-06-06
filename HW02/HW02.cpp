#include <iostream>
#include "Animal.h"
#include "Zoo.h"

using namespace std;

int main()
{
	Zoo zoo;
	zoo.addAnimal(new Dog());
	zoo.addAnimal(new Cat());
	zoo.addAnimal(new Cow());

	zoo.performActions();

	return 0;
}			