#include <iostream>
using namespace std;


int searchSmallestMissing(int* arr, int left, int right, int x) {

    if (right >= left) {
        int mid = (left + right)/2;
        if (arr[mid] == x) {
            return x;
        }
        if (arr[mid] > x) {
            return searchSmallestMissing(arr, left, mid - 1, x);
        }
        return searchSmallestMissing(arr, mid + 1, right, x);
    }

    return EXIT_FAILURE;
}

int main () {
	int arr[] = {4, 5, 6, 7, 8, 9, 10, 11, 16, 19};
	int l = sizeof(arr) / sizeof(int);
	int x = 12;
	int t = searchSmallestMissing(arr, arr[0], l-1, x);
	cout << t << " __ T __ \n";
	return 0;
}