/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

 https://www.youtube.com/watch?v=SOA4k8NDOUY

*/

// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;


int main() {
	//vector <int> data_list = 0;
	// cout >> data_list;

	vector <int> number_list;

	for(int i = 0; i < 10; i++) {
		number_list.push_back(i);
	}

	for (int i = 1;  i != number_list.size(); i++) {
		cout << number_list[i] << "\n";
	}
	return 0;
}

