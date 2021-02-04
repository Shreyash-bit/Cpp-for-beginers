//============================================================================
// Name        : tutorial14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	cout<<"number of terms to be printed : ";
	int num, first=0, second=1, next;
	cin>>num;

	cout<<"fibonacci series :"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<first<<endl;
		next = first + second;
		first = second;
		second = next;

	}


return 0;
}
