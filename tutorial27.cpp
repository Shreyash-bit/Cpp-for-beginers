//============================================================================
// Name        : tutorial27.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>

struct Person
{
	string name;
	int age;
	double salary;
};

int main()
{
	Person p1, p2;
	/*cout<<"enter details as name, age, salary :"<<endl;
	cin>>p1.name;
	cin>>p1.age;
	cin>>p1.salary;

	cout<<"details as name, age, salary are:"<<endl;

	cout<<"name:"<<p1.name<<endl;
	cout<<"age:"<<p1.age<<endl;
	cout<<"salary:"<<p1.salary<<endl;*/

	Person *ptr = &p1;


	cout<<"enter details as name, age, salary are:"<<endl;
	cin>>ptr->name;
	cin>>ptr->age;
	cin>>ptr->salary;

	cout<<"details as name, age, salary are:"<<endl;
	cout<<"name:"<<ptr->name<<endl;
	cout<<"age:"<<ptr->age<<endl;
	cout<<"salary:"<<ptr->salary<<endl;
    ptr = &p2;

	return 0;
}
