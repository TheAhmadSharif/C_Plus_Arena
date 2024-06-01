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

	cout << mp.at(2) << "\n";
	cout << "Map size: " << mp.size() << "\n";

	for (it = mp.begin(); it != mp.end(); ++it) {
		cout << it->first << "\n";
	}

	cout << "_____________\n";
	if(mp.empty() == false) {
		cout << "Not Empty \n";
	}
	cout << "_____________\n";

	for(auto it:mp) {
		cout << it.first << "\n";
	}

	mp.clear();
	cout << "_____________\n";



	map<int, int>s_mp;
	map<int, int>::iterator s_it;

	s_mp[1] = 1;
	s_mp[2] = 2;
	for(auto s_it : s_mp) {
		cout << s_it.first << "\n";
	}
	// s_mp.erase(2); // remove key 2


	s_it = s_mp.find(2);

	cout << *s_it << "\n";

	
	return 0;
}
