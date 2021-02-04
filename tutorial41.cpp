//============================================================================
// Name        : tutorial41.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex
{
private:
	int real, img;
public:
	Complex()
    {
		real = 0;
		img = 0;
    }
	Complex(int r, int i)
    {
		real = r;
		img = i;
    }

	void print()
	{
		cout<<real<<" + "<<img<<"i"<<endl;
	}

	Complex operator +(Complex c)
	{
		Complex temp;
		temp.real = real + c.real;
		temp.img = img + c.img;
		return temp;
	}
};

int main()
{
	Complex c1(5,4);
	Complex c2(2,3);
	Complex c3(1,1);
	Complex c4;

	c4 = c1+c2+c3; //c2.add(c3); then this result gets added in c1

	c4.print();

	return 0;
}
