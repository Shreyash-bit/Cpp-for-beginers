//============================================================================
// Name        : tutorial25.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct person
{
	char name[100];
	int age;
	double salary;
};

int main()
{
	person p1;
	cout<<"enter person name"<<endl;
	cin.getline(p1.name, 100);
	cout<<"enter age : "<<endl;
	cin>>p1.age;
	cout<<"enter salary : "<<endl;
	cin>>p1.salary;

	cout<<"the name is "<<p1.name<<endl;
	cout<<"the age is "<<p1.age<<endl;
	cout<<"the salary is "<<p1.salary<<endl;

	return 0;
}
