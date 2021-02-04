//============================================================================
// Name        : tutorial28.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class Cars
{
	private:
	string company_name;
	string model_number;
	string fuel_type;
	float mileage;
	double price;

	public:
	    void getdata(string cname, string mnum, string ftype, float m, double p)
	    {
	    	company_name = cname;
	    	model_number = mnum;
	    	fuel_type = ftype;
	    	mileage = m;
	    	price = p;
	    }

	    void showdat()
	    {
	    	cout<<"car properties :"<<endl<<endl;
	    	cout<<"company name : "<<company_name<<endl;
	    	cout<<"model number : "<<model_number<<endl;
	    	cout<<"fuel type : "<<fuel_type<<endl;
	    	cout<<"car mileage : "<<mileage<<endl;
	    	cout<<"car price : "<<price<<endl;
	    }
};

int main()
{
	Cars c1, c2, c3;
	c1.getdata("toyota", "1233", "Patrol", 123, 12345);
	c1.showdat();


	return 0;
}
