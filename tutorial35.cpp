//============================================================================
// Name        : tutorial35.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Baseclass
{
 public:
	void show()
	{
		cout<<"base class shoe function called"<<endl;
	}

	virtual void print()
	{
		cout<<"base class print function called"<<endl;
	}
};


class Derivedclass : public Baseclass
{
  public:
 	void show()
 	{
 		cout<<"derived class shoe function called"<<endl;
 	}

 	void print()
 	{
 		cout<<"derived class print function called"<<endl;
 	}
};


int main() {

	Baseclass *baseptr;

	Derivedclass derivedobj;

	baseptr = &derivedobj;

    baseptr->show();
	baseptr->print();


	return 0;
}
