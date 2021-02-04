//============================================================================
// Name        : tutorial29.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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

	Cars(){
		cout<<"default constructor called"<<endl;
		company_name = "killer";
	}

	Cars(string cname,string mnum, string ftype, float m, double p){
		cout<<"Parameterized constructor called"<<endl;
		company_name = cname;
    	model_number = mnum;
    	fuel_type = ftype;
    	mileage = m;
    	price = p;
	}
	Cars(Cars &obj){
		cout<<"copy constructor called"<<endl;
		company_name = obj.company_name;
		model_number = obj.model_number;
		fuel_type = obj.fuel_type;
		mileage = obj.mileage;
		price = obj.price;
	}

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
	    	cout<<"car price : "<<price<<endl<<endl;
	    }

	    ~Cars(){
	    	cout<<"destructor called"<<endl;
	    }
};

int main()
{
	Cars c1, c2("one","fortuner","diesel",122,333);
	c1.getdata("kill", "1233", "Patrol", 123, 12345);
	c1.showdat();
	c2.showdat();
	Cars c3 = c1;
	c3.showdat();
	return 0;
}
