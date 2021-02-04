//============================================================================
// Name        : tutorial8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int x;
	cout<<"enter the number which is to be checked : ";
	cin>>x;
	if(x%2==0)
	{
		cout<< x <<" is even number"<<endl;
	}
	else
	{
		cout<< x <<" is odd number"<<endl;
	}
	return 0;
}
