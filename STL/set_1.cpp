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
	set <int> s = {1,2,4};
	set<int>::iterator it, it2;
	s.insert(0);


	for(auto it: s) {
		cout << it << "\n";
	}

	
	return 0;
}

