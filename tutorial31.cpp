//============================================================================
// Name        : tutorial31.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Distance
{
     private:
	      int meters;
     public:
	      Distance():meters(0){}

	      void displayData(){
	    	  cout<<"meter  value :"<<meters<<endl;
	      }

	      friend void add(Distance &d);
};

void add(Distance &d)
{
	d.meters += 5;
}
int main() {

	Distance d;
	d.displayData();

	add(d);
	d.displayData();
	return 0;
}
