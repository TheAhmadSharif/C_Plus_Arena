/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

https://youtu.be/DZbY6rNU7Wg?t=1100


Iterator. It reduce time coplexity.

*/
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main() {
	vector <int> v1;
	v1.push_back(10);
	v1.push_back(2);
	v1.push_back(4);
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);

	vector<int>::iterator it;
	it = v1.begin();
	it+=5;



	cout << *it << "\n";


	cout << "———————————— Iterator ————————————\n";
	for(it = v1.begin(); it != v1.end(); it++) {
		cout << *it << "\n";
	}

cout << "———————————— Exercise ————————————\n";





	

	return 0;
}

