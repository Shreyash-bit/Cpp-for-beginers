//============================================================================
// Name        : tutorial32.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Shape
{
protected:
	int width;
	int length;

public:
	void setWidth(int w){
		width = w;
	}
	void setLength(int h){
		length = h;
	}

};

class Rectangle: public Shape{
public:
	int getArea(){
		return (width * length);
	}

};

int main()
{
	Rectangle r1;

	r1.setWidth(5);
	r1.setLength(123);

	cout<<"area of the rectangle is : "<<r1.getArea()<<endl;
	return 0;
}
