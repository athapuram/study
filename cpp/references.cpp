#include <iostream>

using namespace std;

/* C code
double swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
*/

/*above code using REFERNCE in cpp */
double swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 50;
	cout << "a =" << a << ", b=" << b << endl;
	swap(a,b);
	cout << "a =" << a << ", b=" << b << endl;
	return 0;	
}
