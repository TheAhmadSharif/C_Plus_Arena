#include <iostream>
#include <string>
using namespace std;


string letter_in_order = "abcd";

int findLetterPosition(char single_letter) {
	for (unsigned i = 0; i < 4; i++) {
		if(letter_in_order[i] == single_letter) {
			return i;
		}
	}
	return 0;

}


int main() {
	string sort_text(4, ' ');
	string test = "dcba";

	sort_text[0] = 'a';
	sort_text[1] = 'b';
	sort_text[2] = 'c';
	sort_text[3] = 'd';
	
	cout <<  sort_text << "sort_text\n";
	return 0;
}