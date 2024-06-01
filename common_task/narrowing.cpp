/*
     https://youtu.be/ZzaPdXTrSb8?t=4386
     Topics: Narrowing  
     Date: 24 August 2022 
*/


  
#include <iostream>
using namespace std;
  
int main() 
{
    int number = 1'0000'0000;
    short another_number {number};  // {} is called brace
    cout << number << endl;
 
    return 0;
}
