#include <iostream>
#include <iterator>
#include <map>
#include <algorithm>

using namespace std;


int main() {
	std::map<int, string> map_list = {{1, "Orange"}, {2, "Apple"}};
	std::vector<std::pair<int, string>> vect(map_list.begin(), map_list.end());
	
	/* ============= Sort Vector pair  ============= */
   	std::sort(vect.begin(), vect.end(), [](auto &left, auto &right) {
	    return left.second < right.second;
	});


   	cout << "Start \n" << "\n";
	for(auto s_it : vect) {
	}


    /* ============= Make a vector ============= */
    std::vector<int> station_list_name;
    /*std::transform(vect.begin(), 
               vect.end(), 
               std::back_inserter(new_vect), 
               [](const std::pair<int, string>& p) { return p.first; });*/

	// for(auto s_it : vect) {
 //        station_list_name.push_back(vect.second);
 //    }


    for(auto pr: vect) {
		station_list_name.push_back(pr.first);
    }



    cout << "_____________" << "\n";

    for(auto &v_it: station_list_name) {
    	cout << v_it <<  "\n";
    }




	
	return 0;
}
