//============================================================================
// Name        : tutorial39.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Base
{
protected:
	int val;
};

class Derived1 : virtual public Base
{
public:
	Derived1()
    {
		val = 1;
    }

	void getValue()
	{
		cout<<"Derived 1 value of data member "<<val<<endl;
	}
};

class Derived2 : virtual public Base
{
public:
	Derived2()
    {
		val = 2;
    }

	void getValue()
	{
		cout<<"Derived 2 value of data member "<<val<<endl;
	}
};

class Derived3 : public Derived2, public Derived1
{
public:
	void getValue()
	{
		cout<<"int value is : ";
		Derived1::getValue();
		cout<<"int value is : ";
		Derived2::getValue();
	}
};

int main()
{
	Derived3 d31;
	d31.getValue();
	return 0;
}
