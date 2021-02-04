//============================================================================
// Name        : tutorial45.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int sum(int num){

	if(num != 0)
	{
		return (num + sum(num-1));
	}
	else
	{
		return num;
	}
}

int main() {

	int n;
	cout<<"enter num upto add : ";
	cin>>n;
	int total = sum(n);
	cout<<"the sum of "<<n<<"natural numbers is : "<<total;
	return 0;
}
