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
	vector <int> v{2, 4, 8, 10};
	v.push_back(1);


	
	   vector<int> target;
	   copy_if(v.begin(), v.end(), back_inserter(target),[](float n ){ return  n > 5;});
		   for (auto i = target.begin(); i != target.end(); i++) {
		    cout << *i << endl;
		}


	

	return 0;
}

