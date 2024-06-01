#include <iostream>
using namespace std;
int main() {
	int a = 2;
	int b = 3;
	int c;

	c = a;
	a = b;
	b = c;

	cout << a << "\n";
	cout << b << "\n";



	return 0;
}