//============================================================================
// Name        : tutorial16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	int myarray1[2][3] = {{1,2,3},{2,3,4}};

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<myarray1[i][j]<<" ";
		}
		cout<<endl;
	}


	return 0;
}
