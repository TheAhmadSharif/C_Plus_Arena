#include <iostream>
using namespace std;

bool book(string origWord, int start, int len);



int main()
{
    string a = "ABCDCBA";
    if(book(a, 0, a.size() - 1)) {
		cout << "Palindrome \n";
	} else {
		cout << "Not Palindrome \n";
	}

    return 0;
}
bool book(string origWord, int start, int len)
{
    if(origWord[start] != origWord[len]) {
		return false;
	}
	if(start == origWord.size() - 1) {
		return true;
	}
	return book(origWord, ++start, --len);
}
