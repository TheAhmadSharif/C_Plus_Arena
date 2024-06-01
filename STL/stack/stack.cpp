/*
 STL = Standard Template Library
 Date: 23 November 2022, Wednesday

Stack: 

*/
#include<iostream>
#include <bits/stdc++.h>
#include<vector>

using namespace std;





int main() {
	stack<string> day_list;

	day_list.push("Friday");
	day_list.push("Saturday");
	day_list.push("Sunday");
	day_list.push("Monday");



	while(!day_list.empty()) {
		string x;
		x = day_list.top();
		cout << x << "\n";
		day_list.pop();
	}


	return 0;
}