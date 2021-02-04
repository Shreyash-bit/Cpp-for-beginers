//============================================================================
// Name        : tutorial42.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Weight
{
private:
	int kg;
public:
	Weight(int x = 0)
	{
		kg = x;
	}

	void printWeight()
	{
		cout<<"Weight is : "<<kg<<endl;
	}

	Weight operator ++()
	{
		Weight temp;
		temp.kg = ++kg;
		return temp;
	}

	Weight operator ++(int)
	{
		Weight temp;
		temp.kg = kg++;
		return temp;
	}
};

int main()
{
	Weight w1;

	w1.printWeight();
	++w1;
	w1.printWeight();
	w1++;              //w1.operator ++
	w1.printWeight();

	Weight w2, w3;

	w2 = ++w3;
	w2.printWeight();
	return 0;
}
