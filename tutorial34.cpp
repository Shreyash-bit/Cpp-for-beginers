//============================================================================
// Name        : tutorial34.cpp
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

	void sounds()
	{
		cout<<"animal sounds"<<endl;
	}
};

class Dog : public Animal
{
public:

	void sounds()
	{
		cout<<"dog barks"<<endl;
	}
};

class Cat : public Animal
{
public:

	void sounds()
	{
		cout<<"cat moue"<<endl;
	}
};


int main() {

	Animal a1;
	a1.sounds();
	cout<<endl;
	Dog d1;
	d1.sounds();
	cout<<endl;
	Cat c1;
	c1.sounds();
	return 0;
}
