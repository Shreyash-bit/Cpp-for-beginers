//============================================================================
// Name        : tutorial36.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Animal
{
public:
	virtual void eat() { cout << "I'm eating generic food";}
};

class Cat : public Animal
{
public:
	void eat() { cout << "I'm eating rat";}
};

class Dog : public Animal
{
public:
	void eat() { cout << "I'm eating dog food";}
};

void function1(Animal*xyz)
{
	xyz->eat();
}
int main() {

	Animal *ptr;
	Cat catobj;
	Dog dogobj;

	ptr = &catobj;

	function1(ptr);
	cout<<endl;
	ptr =&dogobj;
	function1(ptr);

	return 0;
}
