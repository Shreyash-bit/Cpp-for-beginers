//============================================================================
// Name        : tutorial9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout<<"first number : "<<endl;
	cin>>a;
	cout<<"second number : "<<endl;
	cin>>b;
	cout<<"third number : "<<endl;
	cin>>c;

	if(a>b && b>c)
	{
		cout<<a<<" is the greatest out of the given three"<<endl;
	}
	if(b>a && b>c)
	{
		cout<<b<<" is the greatest out of the given three"<<endl;
	}
	if(c>a && c>b)
	{
		cout<<c<<" is the greatest out of the given three"<<endl;
	}
	return 0;
}
