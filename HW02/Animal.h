#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal {
public:
	virtual void makeSound() {};
	virtual ~Animal() {};
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