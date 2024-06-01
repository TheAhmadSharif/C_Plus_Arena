/*
     Topics: Random Number  
     Date: 24 August 2022 
*/
  
#include <iostream>
#include <cstdlib>
#include <time.h>      
using namespace std;
  
int main() 
{
	srand (time(NULL)); // Jan 1 1970  
  	int iSecret = rand() % 10;
    cout << iSecret << endl;
 
    return 0;
}
