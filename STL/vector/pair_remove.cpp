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

// Types for IDs
using StationID = std::string;
using TrainID = std::string;
using RegionID = unsigned long long int;

int main() {

	vector <std::pair<int, int>> _pair;
	_pair.push_back(std::make_pair(10,20));
	_pair.push_back(std::make_pair(12,22));

	cout << _pair.size() << "\n";
	cout << "____________\n";
	auto it = std::remove_if(_pair.begin(), _pair.end(), [&](std::pair<int, int> const & ref) {
    	return ref.first == 12 && ref.second == 22;
	});


	if(it != _pair.end()) {
		_pair.erase(it);

	} 


	cout << _pair.size() << "\n";


	return 0;
}

