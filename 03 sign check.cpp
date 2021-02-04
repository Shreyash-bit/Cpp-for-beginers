//============================================================================
// Name        : tutorial3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int a;

	cout<<"enter num :";
	cin>>a;

	if(a<0)
	{
		cout<<"-ve";
	}

	else if(a>0)
	{
		cout<<"+ve";
	}

	else
	{
		cout<<"zero";
	}
	return 0;
}
