//============================================================================
// Name        : tutorial5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>  //imort iomanip library
using namespace std;

int main() {

	for(int i = 0; i <= 5; i++)
	{
		//std::cout << "5 * "<< i <<"="<< std::setw(3);               // FOR LOOP
	        //std::cout << 5*i << std::endl;
		cout<<setw(3);
		cout<<i<<endl;

	}

	return 0;
}
