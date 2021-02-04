//============================================================================
// Name        : tutorial19.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int maximum(int x, int y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a, b;
	cout<<"enter numbers to be compared :";
	cin>>a>>b;


	//int c = maximum(a,b);
	cout<<"greatest of two is : "<<maximum(a,b)<<endl;

	return 0;
}
