#include <iostream>
using namespace std;

int a = 10; //this is global variable (with in the scope of namespace std)

namespace private_namespace {
	int a = 20; //this is variable (with in the scope of namespace private_namespace).
}


void print_3d_coordinates(double x=0, double y=0, double z=0)
{
	cout <<"A point in 3-D space: x="<<x<<" ,y="<<y<<", z="<<z<<endl;
}

double getArea(double radius=0)
{
	return 3.14*radius*radius;
}

double getArea(double length, double breadth)
{
	return length*breadth;
}

int main()
{
	int num;
	double radius = 10, length = 10, breadth = 10;
	int a = -10; // this is local vlariable (withing main function)
	cout << "Hello world" << endl;
	cout << "enter some number: "; 
	cin >> num;
	cout << "num entered was " << num << endl;
	cout << "global variable in namepace std is " << ::a <<endl;
	cout << "local variable in main function is " << a << endl;
	cout << "varial in private_namespace scope is " << private_namespace::a <<
endl;
	cout << "Area of circle with radius " << "0" << "is " << getArea() << endl;
  cout << "Area of rectabgle with length = "<< length << "and breadth = " <<
breadth << "is " << getArea(length,breadth) << endl;

	print_3d_coordinates(); //prints default values x=0, y=0,z=0
	print_3d_coordinates(10); //prints x=10, y=0, z=0
	print_3d_coordinates(10,20); //prints x=10, y=20, z=0
	print_3d_coordinates(10,20,30); //prints x=10, y=20, z=30

	return 0;
}

