//============================================================================
// Name        : tutorial30.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex
{
     private:
	      int real;
	      float imag;

     public:
	      Complex(){}

	      Complex(int r, float i)
	      {
	    	  real = r;
	    	  imag = i;
	      }

	      void displayData()
	      {
	    	  cout<<"complex number is :"<<real<<" + "<<imag<<"i"<<endl;
	      }

	      int getrealpart()
	      {
	    	  return real;
	      }

	      float getimgpart()
	      {
	    	  return imag;
	      }

};

Complex add_numbers(Complex n1, Complex n2)
{
	int r;
	float i;

	r = n1.getrealpart() + n2.getrealpart();
	i = n1.getimgpart() + n2.getimgpart();
	Complex temp(r,i);
	return temp;
}

int main() {
	Complex c1(1,5),c2(2,3),c3;
	c1.displayData();
	c2.displayData();
	cout<<"addition of c1 and c2 is :";
	c3 = add_numbers(c1,c2);
	c3.displayData();
	cout<<"pointer to object :";
	Complex *ptr1;
	ptr1 = &c3;
	ptr1->displayData();
	ptr1 = &c2;
	ptr1->displayData();
	cout<<ptr1;
	return 0;
}
