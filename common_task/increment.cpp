/* 
	Topics:: Increment https://youtu.be/ZzaPdXTrSb8?t=2086 
 	Date:: 21 August 2022
*/
#include <iostream>

int main() {
	int x = 10;
	int y = x++;
	int z = ++x;

	std::cout << x << std::endl;
	std::cout << z << std::endl;
	return 0;
}