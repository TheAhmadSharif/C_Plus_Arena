#include <iostream>
#include <iterator>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	map<int, int>mp;
	map<int, int>::iterator it;

	mp.insert({1, 10});
	mp.insert({2, 20});
	mp.insert({3, 30});
	mp.insert({4, 40});


	for(auto it:mp) {
		cout << it.first << "\n";
	}


	return 0;
}
