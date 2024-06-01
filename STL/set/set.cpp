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

double distanceCalculate(double x1, double y1, double x2, double y2) {
	double x = x1 - x2; 
	double y = y1 - y2;
	double dist;

	dist = pow(x, 2) + pow(y, 2);       
	dist = sqrt(dist);                  

	return dist;
}


int main() {
	list <int> li;
	list<int>::iterator it;

	

	return 0;
}

