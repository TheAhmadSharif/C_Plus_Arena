// Following is the example, which will produce correct size of various data types on your computer.
  
#include <iostream>
using namespace std;
  
int main() 
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
      
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
      
    cout << "Size of double : " << sizeof(double) << endl;
    
    /*
    	short 2 bytes
    	int 4 bytes
    	double 8 bytes
    	long double 8 bytes
    	long 4 bytes
    	long long 8 bytes
    	char 1 byte
    	// boolean 1 bytes
    	
    */



    int number {1}; // It '{}' called brace
    auto price = 9.99;
    // float interestRate = 3.67f; // 
    auto interestRate = 3.67f; // It will be float auto because of 'f' suffix 
    // auto interestRate = 3.67; // It will be double 
    long fileSize = 90000L;
    char letter = 'a'; 
    bool inValid = false;
      
    return 0;
}
