#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
	Dog dog;
	Cat cat;
	Cow cow;

	Animal* a[3];

	a[0] = &dog;
	a[1] = &cat;
	a[2] = &cow;

	for (int i = 0; i < 3; i++)
	{	
		a[i]->makeSound();
	}

	return 0;
}			