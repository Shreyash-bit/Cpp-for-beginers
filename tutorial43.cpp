//============================================================================
// Name        : tutorial43.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*int add(int x, int y)
{
	return x+y;
}

float add(float x, float y)
{
	return x+y;
}

double add(double x, double y)
{
	return x+y;
}*/

template <typename S, typename R>
R add(S x, R y)
{
	return x+y;
}

int main()
{
	cout<<"additin of two integers 3,4 is :"<<add<int>(3,4);
	cout<<"additin of two floats 3.15,4.45 is :"<<add<int,float>(3,4.45f);
	return 0;
}
