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


using namespace std;

int main() {

	std::unordered_map<string, string> _train_list = {};
	 _train_list.insert({ "tukutuku", "tpe" });
	//_train_list.insert({ 2, 30 });



	std::string a = "tpe:0900";
	string train = a.substr(0,3);
	string time = a.substr(4,8);

	cout << train << "\n";
	cout << time << "\n";
	 
	return 0;
}

