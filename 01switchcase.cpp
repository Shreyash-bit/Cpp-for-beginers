//============================================================================
// Name        : tutorial1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	char op;
	float num1,num2;

	cout << "enter which operator you want to use (-,+,*,/) : ";
	cin >> op;

	cout << "enter 1st number and 2nd number : ";
	cin >> num1 >> num2;

	switch(op)
	{
	    case'+':
	    	cout << num1+num2;
			cin >> op;
			break;

	    case'-':
	    	cout << num1-num2;
	    	cin >> op;
	    	break;

	    case'*':
	    	cout << num1*num2;
	    	cin >> op;
	    	break;

	    case'/':
	    	cout << num1/num2;
	    	cin >> op;
	    	break;

	    default:
	    	cout << " ERROR! enter valid operator ";
		break;
	}

	return 0;
}
