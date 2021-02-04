//============================================================================
// Name        : tutorial20.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

inline int add(int a, int b)
{
	return (a+b);
}

int sum(int x, int y, int z=0, int w=0)
{
	return (x+y+z+w);
}
int main()
{
	cout<<"4 + 5 = "<<add(4,5)<<endl;
	cout<<"- sum ="<<sum(1,2);
	return 0;
}
