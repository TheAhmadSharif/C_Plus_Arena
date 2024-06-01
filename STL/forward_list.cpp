/*
 STL = Standard Template Library
 Date: 09 October 2022, Wednesday

Forward List is preferred over the list when only forward traversal is required (same as the singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of the graph, etc.

which requires constant time for insertion and deletion.
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

