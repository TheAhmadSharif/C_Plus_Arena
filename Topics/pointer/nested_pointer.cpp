#include <iostream>
using namespace std;

int main() {
	int num = 10;
	int* p_num = &num;
	int** p_2_num = &p_num;
	
	
	cout << "Address of number " << &num << "\n";
	cout << "Address of p_num " << p_num << "\n";
	cout << "Address of p_2_num " << p_2_num << "\n";

	return 0;
}