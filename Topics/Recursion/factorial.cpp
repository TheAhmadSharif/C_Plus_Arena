#include <iostream>
using namespace std;

int get_factorial(int k) {
    if(k < 2) {
    	return 1;
    }
    cout << k * get_factorial(k - 1) << " K \n";
    return k * get_factorial(k - 1);
}


int main() {
   get_factorial(3);
   return 0;
}
