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

	
	

	map<int, int>s_mp;
	map<int, int>::iterator s_it;

	s_mp[1] = 1;
	s_mp[2] = 2;
	for(auto s_it : s_mp) {
		cout << s_it.first << "\n";
	}

	cout << "__________________ \n";
  s_it = std::find_if(s_mp.begin(), s_mp.end(),  [](auto&& p) { return p.second == 2; });


   if (s_it != s_mp.end()) {
   		cout << s_it->second << "\n";
   }

	
	return 0;
}
