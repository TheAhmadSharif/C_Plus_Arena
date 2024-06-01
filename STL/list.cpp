/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

https://youtu.be/DZbY6rNU7Wg?t=1100


List: 

To insert element we need to use iterator. We can not do that like vector.

*/
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main() {
	list <int> li;
	list<int>::iterator it;

	li.push_back(0);
	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(4); // Add in Last position
	li.push_front(5);
	li.push_front(6); 
	li.push_front(7); // Add i first position


	li.remove(2); // It removes all 2 elements
	li.sort(); // sort list
	li.reverse(); // sort in reverse order
	li.unique(); // Remove same elements at side
	// li.merge(li2) only merge when it is sorted

	it = li.begin(); // li.begin() + 2 // It does nor work in list
	advance(it, 0);
	li.insert(it, 500);

	cout << "—————— Iterator —————— \n";
	for(it = li.begin(); it != li.end(); ++it) {
		cout << *it << "\n";
	}
	cout << "—————— Auto Iterator —————— \n";

	for(auto it : li) {
		cout << it << "\n";
	}
	cout << "—————— List Method —————— \n";
	cout << li.front() << " Front \n";  // 0
	cout << li.back() << " Back \n";   // 7

	li.pop_front(); // Remove 0
	li.pop_back();  // Remove 7

	cout << li.size() << " size \n ";   // 7
	


	

	return 0;
}

