#ifndef ANIMAL_H_
#define ANMAL_H_

class Animal {
public:
	virtual void makeSound() {};
};	
class Dog : public Animal {
public:
	void makeSound();
};
class Cat : public Animal {
public:
	void makeSound();
};
class Cow : public Animal {
public:
	void makeSound();
};
#endif