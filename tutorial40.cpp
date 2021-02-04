//============================================================================
// Name        : tutorial40.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Myclass
{
private:
	int x;
	static int count;
public:
	//int x;
	//static int count;

	Myclass()
	{
		count++;
	}

	static int getCount()
	{
		return count;
	}
};

int Myclass :: count=0;


int main()
{
	cout<<"initial count : "<<Myclass::getCount()<<endl;
	Myclass m1, m2;
	cout<<"initial count : "<<Myclass::getCount()<<endl;
	return 0;
}
