#include <iostream>
using namespace std;

int main() {
	int i, j, temp, min_index;
	int array[3] = {4, 1, 5};
	for(i = 0; i < 3; i++) {
		min_index = i;
		for(j = i+1; j < 3; j++) {
			if(array[min_index] > array[j]) {
				min_index = j;
			}
		}
		if(min_index != i) {
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
		}
	}

	cout << "Hi" << "\n";
	for(int step = 0; step < 3; step++) {  
         cout << array[step] << "\n";  
    }  
	return 0;
}