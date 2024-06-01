#include <iostream>
using namespace std;

int main() {
	int test = 10;

	
	int* _pointer = &test; 	// Pointer store the address of a variable.

	cout << test << "\n";
	cout << &test << "\n"; // It print memory location of test variable.
	cout << _pointer << "\n";

	cout << "________________ \n";

	int* ptr; // We can use either * at the end of data type int* or at first * of the variable name like *ptr; 
	int foo = 7;
	ptr = &foo;

	cout << &foo << "\n";
	cout << ptr << "\n";


	cout << "________________ \n";

	int d = 10;
	int *p;
	p = &d;

	*p = 60;
	cout << p << "\n";
	cout << d << "\n";
	cout << *p << "\n";


	cout << "________________ \n";

	int number = 200;
	int* num_pointer  = &number; // & ampersand

	cout << num_pointer << "\n";


	cout << "________________ \n";

	double number_2 = 13.5;
	// num_pointer = &number_2; We can not reassign int to doulb vlaue.


	bool* p_bool; 
	char* p_char; 
	int* p_int; 


	return 0;
}