//============================================================================
// Name        : tutorial23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



int main()
{
	int numerator, denominator, result;
	cout<<"enter n and d :"<<endl;
	cin>>numerator>>denominator;
    try
    {
    	if(denominator == 0)
    	{
    		throw(denominator);
    	}
    	result = numerator / denominator;
    	cout<<"division is : "<<result;

    }
    catch(int ex)
    {
    	cout<<"Exception denominator can not be zero "<<ex;
    }

	return 0;
}
