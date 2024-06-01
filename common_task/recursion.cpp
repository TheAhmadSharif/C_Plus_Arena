#include <iostream>
using namespace std;


int get_factorial (int k) {
	if( k <= 1) {
		return 1;
	} else {
		return k * get_factorial(k-1);	
	}
}

int sumToK(int k) {
  if (k <= 0) {
    return 0;
  } else {
    return k + sumToK(k-1);
  }
}

return ((number % 10) + sumOfDigits(number / 10));


int sumOfDigits(int number)
{
 
    return ((number % 10) + sumOfDigits(number / 10));
}

int sumOfDigits(int number) {
  if (number < 10){
    return number;
  }
  return ((number % 10) + sumOfDigits(number / 10));
}


int main() {
	int factorial_number;
	cout << "Enter a number to get factorial: ";
	cin >> factorial_number;
	int result = sumToK(factorial_number);
	cout << result << "\n";
	return 0;
}
