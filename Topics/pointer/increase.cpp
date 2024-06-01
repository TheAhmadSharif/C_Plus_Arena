#include <iostream>
using namespace std;


int increase(int *x) {
	*x = *x + 1;
	return *x;
}

int main() {
	int t = 10;

	increase(&t);

	cout << t << "\n";


	return 0;
}