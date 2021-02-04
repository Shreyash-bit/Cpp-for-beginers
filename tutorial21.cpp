//============================================================================
// Name        : tutorial21.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int add(int a, int b)
{
	return (a+b);
	cout<<"function 1"<<endl;
}

double add(double a, double b)
{
	return (a+b);
	cout<<"function 2"<<endl;
}
int add(int a, int b, int c)
{
	return (a+b+c);
	cout<<"function 3"<<endl;
}

double add(double a, int b)
{
	return (a+b);
	cout<<"function 4"<<endl;
}

int main()
{
	cout<<add(1,2)<<endl;
	cout<<add(1.5,2.1)<<endl;
	cout<<add(1,2,3)<<endl;
	cout<<add(1.5,2)<<endl;

	return 0;
}
