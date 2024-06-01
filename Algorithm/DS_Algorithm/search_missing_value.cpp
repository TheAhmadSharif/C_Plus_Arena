#include <iostream>
using namespace std;


int searchSmallestMissingIteration(int* arr, int size){
	int step;
	for(step = 0; step < size; step++) {
		int temp = arr[step] + 1;
		if(arr[step] == arr[size - 1]) {
			return EXIT_FAILURE;
		}
		if(step != size && temp != arr[step +1]) {
			return temp;
		}
	}
 
 return EXIT_FAILURE;
}

int main () {
	int arr[] = {1, 2, 4};
	int l = sizeof(arr) / sizeof(int);
	int t = searchSmallestMissingIteration(arr, l);
	// cout << t << " T ";
	return 0;
}