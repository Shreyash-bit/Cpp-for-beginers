//============================================================================
// Name        : tutorial44.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


template <typename S, typename R>
class Weight
{
private:
	S kg;
	R gram;

public:

	void setData(S x, R y)
	{
		kg = x;
		gram = y;
	}

	S getkgData()
	{
		return kg;
	}
	R getgramData()
	{
		return gram;
	}
};

int main() {

	Weight <int,double>w1;
	w1.setData(5,5.354);
	cout<<"Value is : "<<w1.getkgData()<<endl;
	cout<<"Value is : "<<w1.getgramData()<<endl;


	Weight <double,char>w2;
	w2.setData(5.765,'w');
	cout<<"Value is : "<<w2.getkgData()<<endl;
	cout<<"Value is : "<<w2.getgramData()<<endl;


	return 0;
}
