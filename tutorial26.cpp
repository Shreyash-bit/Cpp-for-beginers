//============================================================================
// Name        : tutorial26.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

struct Person
{
	string name;
	int age;
	double salary;
};

int main()
{
	Person p[5];
	for(int i=0;i<5;i++)
	{
		cout<<"entry number :"<<i+1<<endl;
		cin>>p[i].name;
		cin>>p[i].age;
		cin>>p[i].salary;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"details of entry number :"<<i+1<<endl;
		cout<<"name:"<<p[i].name<<endl;
		cout<<"age:"<<p[i].age<<endl;
		cout<<"salary:"<<p[i].salary<<endl;
	}


	return 0;
}
