//============================================================================
// Name        : tutorial10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout<<"swapping program"<<endl;
	int x, y;
	cout<<"enter x value : ";
	cin>>x;
	cout<<"enter y value : ";
	cin>>y;

	cout<<"before swapping "<<endl;
	cout<<"x value is :"<<x<<endl;
	cout<<"y value is :"<<y<<endl;

	int z;
	z = x;
	x = y;
	y = z;

	cout<<"after swapping "<<endl;
	cout<<"x value is :"<<x<<endl;
	cout<<"y value is :"<<y<<endl;

	return 0;
}
