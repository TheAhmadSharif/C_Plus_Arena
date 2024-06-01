#include <iostream>
using namespace std;

void merge(int a[], int begin, int mid, int end) {
	int i, j, k;
	int n1 = mid - begin + 1;
	int n2 = end - mid;

	int ledtArray[n1];
	int rightArray[n2];

	for(int i = 0; i < n1; i++) {
		leftArray[i] = a[begin + i];
	}

	for(int j = 0; j < n2; j++) {
		rightArray[j] = a[mid + 1 + j];
	}

	i = 0;
	j = 0;
	k = begin;

	while(i < n1 && j < n2) {
		
	}
}


int main() {
	given_array[3] = {2,4,1};
	int arr_length = sizeof(given_array);
	int left = 0;
	int right = arr_length - 1;
	int mid_value = (left + right)/2;

	return 0;
}