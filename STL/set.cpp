/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

https://youtu.be/DZbY6rNU7Wg?t=1100


Set: 
By default is it Asc order.

*/
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main() {
	set <int> s;
	set<int>::iterator it, it2;
	set <int, greater<int>> sg;
	s.insert(0);
	s.insert(4);
	s.insert(2);
	s.insert(1);


	for(it = s.begin(); it != s.end(); it++) {
		cout << *it << "\n";
	}
	cout << s.size() << " —————— sSize\n";
	cout << s.max_size() << " —————— Max Size\n";


	
	sg.insert(14);
	sg.insert(4);
	sg.insert(2);
	sg.insert(0);


	it2 = sg.begin();
	advance(it2, 2); 
	sg.erase(it2);

	
	for(auto it2 : sg) {
		cout << it2 << "\n";
	}

	/* Find */

	// auto it = sg.find(2);
	it2 = sg.find(2);
	
	if(it2 == sg.end() ) {
		cout << "Found\n";
	} else {
		cout << "Not Found\n";
	}

	return 0;
}

