//============================================================================
// Name        : tutorial47.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	/*char str1[100];
	cout<<"enter your name : "<<endl;
	cin.getline(str1, 100);
	cout << "name is : "<<str1<<endl;*/

	cout<<"enter string : "<<endl;
	string obj;
	getline(cin,obj);
	cout<<obj<<endl;
	cout<<obj.length()<<endl;
	return 0;
}
