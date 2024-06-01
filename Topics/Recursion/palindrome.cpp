#include <iostream>
using namespace std;

bool check_palindrome(string word, int start, int end) {
	if(word[start] != word[end]) {
		return false;
	}

	if(start == word.size() - 1) {
		return true;
	}
	return check_palindrome(word, ++start, --end);
}


int main() {
	string word = "aaav";
	int l = word.size() - 1;
	if(check_palindrome(word, 0, l)) {
		cout << "Palindrome \n";
	} else {
		cout << "Not Palindrome \n";
	}
	

	return 0;
}