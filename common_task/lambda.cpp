#include <iostream>

/*
https://www.programiz.com/cpp-programming/lambda-expression

The "&" denotes a reference instead of a pointer to an object (In your case a constant reference).

The advantage of having a function such as

foo(string const& myname) 

is that in the former case you are guaranteed that myname is non-null, since C++ does not allow NULL references.

*/
using namespace std;


int main() {
	int a = 2;
	int b = 4;
	auto test = []() {
		cout << "Hi, from Lambda\n";
	}; 

	test();

	cout << "__________________\n";
	auto add = [] (int a, int b) {
		cout << "sum = " << a + b << "\n";
	};

	add(a, b);
	return 0;
}