#include <iostream>
#include <cstring>

using namespace std;


class Student
{

	private:
		char* studentName;
	public:
		Student(const char* name): studentName (new char[50])
		{
			cout << "Inside constructor: passed in string string =" << name << endl;
			//studentName = new char[50];
			strcpy(studentName, name);
			cout << "Initialized string to " << studentName << endl;
		}
		
		void print()
		{
			cout << "studentName is " << studentName << endl;
		}
	
		~Student()
		{
			cout << "Freeing up memory for string " << studentName << endl;
			delete[] studentName;
		}
};



int main()
{
	const char name[50] = "Praveen Reddy Athapuram";
	Student student(name);
	student.print();
	cout << "Exiting the program - last line of code. Bye!" << endl;
	return 0;
}
