#include <iostream>
using namespace std;


int main() {


	int i, j, temp;
	int given_array[3] = {2,4,1};

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3-i-1; j++) {
			if(given_array[j] > given_array[j+1]) {
				temp = given_array[j];
				given_array[j] = given_array[j + 1];
				given_array[j + 1] = temp;
			}
		}
	}

	for(int step = 0; step < 3; step++)  
    {  
         cout << given_array[step] << "\n";  
    }  

	return 0;
}