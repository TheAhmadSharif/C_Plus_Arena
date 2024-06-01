#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> test = {1,2,4,6};

	for (int i = 0; i < test.size(); i++) {
		cout << test[i] << "\n";
	}
	return 0;
}