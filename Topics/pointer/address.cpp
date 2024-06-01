#include <iostream>
using namespace std;

int main() {
	int arr[] = {4,8,10};
	cout << &arr[0] << "\n";
	cout << &arr[1] << "\n";
	cout << &arr[2] << "\n";
	cout << "_________________\n";

	cout << *arr << "\n";
	cout << "_________________\n";
	double arr_pointer[10];
	double* pointer = arr_pointer;
	cout << arr_pointer << "\n";
	cout << pointer << "\n";

	return 0;
}