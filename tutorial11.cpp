//============================================================================
// Name        : tutorial11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout<<"enter year which is to be checked :";
	cin>>year;

	if(year%100==0)
	{
		if(year%400==0)
		{
			cout<<year<<" is leap!!!!!!";
		}

		else
		{
			cout<<"no, not a leap year";
		}
	}

	else if(year%4==0)
	{
		cout<<year<<" is leap!!!!!!";
	}



	return 0;
}
