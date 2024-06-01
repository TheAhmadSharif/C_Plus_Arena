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
	// vector <int> data_list(2,4);
	vector <int> data_list;
	data_list.push_back(1);
	data_list.push_back(4);
	data_list.push_back(6);

	cout << data_list.at(0) << "\n"; // 1
	cout << data_list[1] << " pos 1 \n"; // 1
	cout << data_list.size() << "\n"; // 2
	cout << data_list.front() << " Front \n"; // 2
	cout << data_list.back() << " Back  \n"; // 2


	cout << " ———————————— For Loop ————————————" << "\n";

	for (int i = 0; i < data_list.size(); ++i) {
		cout << data_list[i] << "\n";
	}
	/* Vector Cleat */
	cout << " ———————————— For Loop ————————————" << "\n";

	data_list.pop_back();
	data_list.erase(data_list.begin() + 0, data_list.end());

	for (int i = 0; i < data_list.size(); ++i) {
		cout << data_list[i] << "\n";
	}



	data_list.clear(); // Clear

	cout << data_list.size();
	cout << data_list.empty();




	

	return 0;
}

