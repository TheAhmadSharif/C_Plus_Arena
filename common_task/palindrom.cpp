#include <iostream>
using namespace std;

void check_palindrom(string word) {
	string test_word = word;
	int flag = 0;
	int str_len = word.length();
	for(int i = 0; i < str_len; i++) {
		if(test_word[i] != test_word[str_len -1 - i]) {
			
			flag = 1;
			break;
		}
	}
	if(flag == 1 ) {
		cout << "Not Palindrom \n";
	} else {
		cout << "Palindrom \n";
	}
}

int main() {
	check_palindrom("aba");
	return 0;
}