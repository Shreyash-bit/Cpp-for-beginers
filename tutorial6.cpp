//============================================================================
// Name        : tutorial6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	char mychar;
	cout<<"enter a character : "<<endl;
	cin>>mychar;
	while(mychar=='x')
	{
		cout<<"I am Groot !!!!"<<endl;
		cout<<"enter a character : "<<endl;
		cin>>mychar;

	}

	return 0;
}
