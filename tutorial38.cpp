//============================================================================
// Name        : tutorial38.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class A
{
public:
	void printMessage()
	{
		cout<<"class A print message"<<endl;
	}
};

class B
{
public:
	void printMessage()
	{
		cout<<"class B print message"<<endl;
	}
};

class AB : public A, public B
{
public:
	void printMessage()
	{
		A::printMessage();
		B::printMessage();
		cout<<"class AB print message"<<endl;

	}
};

int main() {

	AB obj;
	obj.printMessage();


	return 0;
}
