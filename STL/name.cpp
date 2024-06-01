/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

 https://www.youtube.com/watch?v=SOA4k8NDOUY

*/
#include<iostream>
#include<vector>
#include<stack>

using namespace std;


int main() {
	stack <string> string_list;

	string_list.push("Ahmad");
	string_list.push("Sharif");
	string_list.push("Delwar");

	cout << string_list.top() << "\n";

	string_list.pop();

	cout << string_list.top() << "\n";
	

	return 0;
}

