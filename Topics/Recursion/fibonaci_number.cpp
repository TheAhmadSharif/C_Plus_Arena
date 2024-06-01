#include <iostream>
using namespace std;


int fibonacci_number(int k) {
   if(k < 2 ) {
   	return k;
   } 
   
   return (fibonacci_number(k-1) + fibonacci_number(k - 2));
}

int main() {
    /* x = x  + 1; 0,1,1,2,3,5,8,11 */
    int x = 0;
    while (x < 8) {
    	int t = fibonacci_number(x);
    	cout << t << " T \n";
    	x = x + 1;
    
    }
    
    return 0;
}
