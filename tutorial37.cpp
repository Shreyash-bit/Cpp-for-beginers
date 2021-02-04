//============================================================================
// Name        : tutorial37.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Shape
{
public:
	virtual void getArea() = 0;    // pure virtual
};

class Circle : public Shape
{
public:
	void getArea()
	{
		cout<<"enter radius :";
		int r;
		cin>>r;
		cout<<"area of circle is :"<<3.14*r*r<<endl;
	}
};

class Rectangle : public Shape
{
public:
	void getArea()
	{
		cout<<"enter length :";
		int l, b;
		cin>>l;
		cout<<"enter breadth :";
		cin>>b;
		cout<<"area of circle is :"<<l*b<<endl;
	}
};


int main()
{
	Circle c1;
	c1.getArea();
	cout<<endl;
	Rectangle r1;
	r1.getArea();
	return 0;
}
