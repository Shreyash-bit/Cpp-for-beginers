//============================================================================
// Name        : tutorial33.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Mybaseclass
{
public:
	int x;
	Mybaseclass(){
		x = 5;
		y = 5;
		z = 5;
	}

	void printProtecteddata(){
		cout<<"y : "<<y<<endl;
	}
protected:
	int y;
private:
	int z;
};

class Myderivedclass: public Mybaseclass
{


};

void myoutsidefunc(Mybaseclass obj)
{
	//cout<<"x : "<<obj.x<<endl;
	//obj.printProtecteddata();
	//cout<<"z : "<<obj.z<<endl;
}

int main() {
	Mybaseclass obj1;

	myoutsidefunc(obj1);

	return 0;
}
