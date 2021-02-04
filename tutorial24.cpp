//============================================================================
// Name        : tutorial24.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <fstream>

int main()
{
	char arr[100];
	cout<<"enter your name and number : "<<endl;
	cin.getline(arr, 100);

	ofstream myfile("file.txt");
	myfile<<arr;
	myfile.close();

	cout<<"file created successfully"<<endl;

	char arr1[100];
	ifstream obj("file.txt");
	myfile<<arr1;
	myfile.close();

	cout<<"file created successfully"<<endl;

	return 0;
}
