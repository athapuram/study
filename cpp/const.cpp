#include <iostream>
using namespace std;


const double PI = 3.141596535;

double swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10, b = 40;
	bool status;
	cout << "a=" << a << ", b=" << b << endl;
	swap(a,b);
	cout << "a=" << a << ", b=" << b << endl;
	status = true;
	return 0;
}
