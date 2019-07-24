#include <iostream>


using namespace std;

/* creating an class triangle */
// objects - side1, side2, and side3 (following can be public)
//					 angles (might not be interested, can be defined as private)
// funtions - Calcualte area, clacualte perimeter (following functions can be public)
//            calculate COSINES, SINES (followin may not be interested to
//            public and make them as internal functions)

//Class has:
// Member variables
// Member Functions (or Methods)
// The Constructors
// The Destuctors
//

// defining a class ComplexNumber
class ComplexNumber
{
	// private is used to specify that below member variables are in local scope.
	private:
		float realPart;
		float complexPart;

	public:
		//this is class constructor, without arguments
		//ComplexNumber()
		//{
	  //		cout << "No arg-constructor called" << endl;
		//}
		
    //default values class constructor with initialisation list. 
		ComplexNumber() : realPart(0.0), complexPart(0.0)
		{
			cout << "no-arg constructor called" << endl;
		}
	
		//class constructor with arguments
		ComplexNumber(double r, double c) : realPart(r), complexPart(c)
		{
			cout << "arg constructor called" << endl;
		}

		//copy constructor
		ComplexNumber (const ComplexNumber& rhs): realPart(rhs.realPart), complexPart(rhs.complexPart)
		{
			cout << "Inside the copy-constructor"	<< endl;
		}

		void setMemberVariables(double r, double c)
		{
			realPart = r;
			complexPart = c;
		}

		void setRealPart(double r)
		{
			realPart = r;
		}

		void setComplexPart(double c)
		{
			complexPart = c;
		}

		float getRealPart()
		{
			return realPart;
		}

		float getComplexPart()
		{
			return complexPart;
		}

		void print()
		{
			cout << "real = " << realPart << " complex = " << complexPart << endl;
		}
};

int main()
{
	int i(0);
	float f(0);
	ComplexNumber c(3.14, 5.3);
	ComplexNumber c1=c;
	cout << "Hello there" << endl;
	//c1.setMemberVariables(2.14,6.3);
	cout << "c holds: " <<endl;
	c.print();
	cout << "c1 holds: " <<endl;
	c1.print();
	c.setMemberVariables(8.12, 3.3);
	cout << "c holds: " <<endl;
	c.print();
	cout << "c1 holds: " <<endl;
	c1.print();
	cout <<"Okey-dokey! All done" <<endl;
	return 0;

}
