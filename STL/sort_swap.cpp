/*
 STL = Standard Template Library
 Date: 24 August 2022, Wednesday

 https://www.youtube.com/watch?v=SOA4k8NDOUY
 https://www.youtube.com/watch?v=96ObBC6TuoA



 01. Vector Declaration
 02. Push Back
 03. Size()
 04. front()
 05. back()
 06. clear()


*/
#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;



int main() {
	// vector <int> v1(2,4);
	vector <int> v1;
	vector <int> v2;
	v1.push_back(10);
	v1.push_back(2);
	v1.push_back(4);



	v2.push_back(7);
	v2.push_back(3);
	v2.push_back(0);







	cout << v1.at(0) << "\n"; // 1
	cout << v1[1] << " pos 1 \n"; // 1
	cout << v1.size() << "\n"; // 2
	cout << v1.front() << " Front \n"; // 2
	cout << v1.back() << " Back  \n"; // 2

	sort(v1.begin(), v1.end());
	swap(v1, v2);
	


	cout << "———————————— After Swap ————————————\n";
	for (int i = 0; i < v1.size(); ++i) {
		cout << v1[i] << "\n";
	}

	cout << "———————————— After Reverse ————————————\n";
	reverse(v1.begin(), v1.end());
	for (int i = 0; i < v1.size(); ++i) {
		cout << v1[i] << "\n";
	}





	

	return 0;
}

