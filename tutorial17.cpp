//============================================================================
// Name        : tutorial17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int var = 5;
	int *ip;

	ip=&var;

	cout<<"variable value :"<<var<<endl;
	cout<<"variable value :"<<*ip<<endl;
	cout<<"variable address :"<<ip<<endl;

	*ip = 6;

	cout<<"variable value :"<<var<<endl;
	cout<<"variable value :"<<*ip<<endl;
	cout<<"variable address :"<<ip<<endl;
	return 0;
}
