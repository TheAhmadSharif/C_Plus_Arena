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
	priority_queue<int> pq;

	day_list.push(100);
	day_list.push(200);
	day_list.push(3100);
	day_list.push(400);


	



	while(!day_list.empty()) {
		string x;
		x = day_list.top();
		cout << x << "\n";
		day_list.pop();
	}


	return 0;
}