/* 
	Topics:: Priority  
 	Date: 21 August 2022

 	* and / (division) has higher priorityt than addition (+) and subtraction (-)
*/

#include <iostream>

int main() {
	double x = 1;
	double y = 2;
	double z = (x+12)/(3*y);

	

	std::cout << z << std::endl;
	return 0;
}
