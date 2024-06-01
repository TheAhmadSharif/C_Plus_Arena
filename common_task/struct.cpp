#include <iostream>

using namespace std;



struct car {
	string brand;
	string model;
	int year;
};

int main() {
	car c_type_1;
	c_type_1.brand = "Volkswagon";
	c_type_1.model = "Golf";
	c_type_1.year = 2006;


	car c_type_2;
	c_type_2.brand = "Toyota";
	c_type_2.model = "Yaris";
	c_type_2.year = 2008;


	cout << "Car Brand : " << c_type_1.brand << "\n"; 
	return 0;
}