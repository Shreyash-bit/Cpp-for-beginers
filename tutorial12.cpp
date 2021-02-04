//============================================================================
// Name        : tutorial12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int i,f,r;
	cout<<"enter number of which the factorial is required : ";
	cin>>f;
	r=1;

	for(i=1;i<=f;i++)
	{
		r=r*i;

	}
	cout<<r;


	return 0;
}
