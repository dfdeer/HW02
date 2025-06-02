#include <iostream>
#include "Animal.h"

using namespace std;

void Dog::makeSound() {
	cout << "Dog makes sound: Woof! " << endl;
}
void Cat::makeSound() {
	cout << "Cat makes sound: Meow! " << endl;
}
void Cow::makeSound() {
	cout << "Cow makes sound: Moo! " << endl;
}