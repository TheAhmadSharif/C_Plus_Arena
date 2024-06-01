#include <iostream>
using namespace std;

int main() {
	int arr[] = {4,8,10};
	cout << &arr[0] << "\n";
	cout << &arr[1] << "\n";
	cout << &arr[2] << "\n";
	cout << "_________________\n";

	cout << *arr << "\n";


	return 0;
}