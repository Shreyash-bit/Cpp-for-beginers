//============================================================================
// Name        : tutorial22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swipebyvalue(int x, int y)
{
	int z = x;
	x = y;
	y = z;
}

void swipebyreference(int &x, int &y)
{
	int z = x;
	x = y;
	y = z;
}

void swipebyaddress(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a = 100, b = 0;

	cout<<"before swapping a ="<<a<<" b="<<b<<endl;
	swipebyvalue(a, b);
	cout<<"after swapping a ="<<a<<" b="<<b<<endl;
	cout<<endl;
	cout<<"before swapping a ="<<a<<" b="<<b<<endl;
	swipebyreference(a, b);
	cout<<"after swapping a ="<<a<<" b="<<b<<endl;
	cout<<endl;
	cout<<"before swapping a ="<<a<<" b="<<b<<endl;
	swipebyaddress(&a, &b);
	cout<<"after swapping a ="<<a<<" b="<<b<<endl;
	return 0;
}
