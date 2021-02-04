//============================================================================
// Name        : tutorial4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int num;

	cout<<"enter num betn 1-7 :";
	cin>>num;

	switch(num)
	{
		case 1:
			cout<<"mon";
		    break;
		case 2:
			cout<<"tue";
			break;
		case 3:
			cout<<"wed";
			break;

		case 4:
		   cout<<"thu";
		   break;
		case 5:
		   cout<<"fri";
		   break;
		case 6:
		   cout<<"sun";
		   break;
		case 7:
		   cout<<"sunday";
	       break;

		default:
			cout<<"ERROR!";
	}

	return 0;
}
