/*
	Insertion Algorithm
	Date: 31 August 2022, Wednesday
*/

#include <iostream>
using namespace std;

int main() {
	int unsorted_array[3] = { 9,6,4};

	for (int step = 2; step < 4; step++) {
		int temp = unsorted_array[step]; // unsorted_array[step] = {4}
		int j = step - 1; // 1
			 // 4 < 9	
		while(temp < unsorted_array[j] && j >= 0 ) {
			unsorted_array[j + 1 ] = unsorted_array[j]; 
			// unsorted_array[1+1=2] = 9
			// {6, ?, 9}
			j = j - 1; // 1-1 =
		}
		unsorted_array[j + 1 ] = temp;
		cout << unsorted_array[0] << "________ 24 " << "\n";  
		cout << j << "________ j " << "\n";  
		break;
	}	


	cout<<"\nSorted list is \n";
    for(int step = 0; step < 3; step++)  
    {  
        // cout << unsorted_array[step] << "\n";  
    }  
	return 0;
}