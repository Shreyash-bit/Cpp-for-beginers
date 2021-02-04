//============================================================================
// Name        : tutorial18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int size;
	int *ptr;

	cout<<"enter size of array : ";
	cin>>size;

	ptr = new int[size];
	cout<<"enter numbers :";

	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	cout<<"entered numbers are :";
	for(int j=0;j<size;j++)
	{
		cout<<ptr[j]<<" ";
	}
	return 0;
}
