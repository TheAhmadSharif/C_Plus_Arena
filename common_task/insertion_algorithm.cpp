/*
	Insertion Algorithm
	Date: 31 August 2022, Wednesday
*/

#include <iostream>
using namespace std;

int main() {
	int unsorted_array[5] = { 6, 2};
	int arr_length = sizeof(unsorted_array)/sizeof(unsorted_array[0]);

	for (int step = 0; step < 3; step++) {
		int next_key = unsorted_array[step + 1];
		int j = step;

		while(next_key < unsorted_array[j] && j >= 0 ) {
			unsorted_array[j + 1 ] = unsorted_array[j];
			j = j - 1;
		}
		unsorted_array[j + 1 ] = next_key;
	}	


	cout<<"\nSorted list is \n";
    for(int step = 0; step < 3; step++)  
    {  
        cout << unsorted_array[step] << "\n";  
    }  
	return 0;
}