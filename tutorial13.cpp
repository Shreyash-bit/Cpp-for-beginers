//============================================================================
// Name        : tutorial13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int n, num, digit, rev=0;
	cout<<"number to check palindrome : ";
	cin>>num;
	n=num;

	while(n!=0)
	{
		digit=n%10;
		n=n/10;
		rev=(rev*10);
		rev=rev+digit;
	}

	if(num==rev)
	{
		cout<<"the entered num is palindrome "<<endl;
	}

	else
	{
		cout<<"the entered num is NOT palindrome "<<endl;
	}

	return 0;
}
