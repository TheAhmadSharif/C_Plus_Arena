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


int const NO_VALUE = std::numeric_limits<int>::min();

// Types for IDs
using StationID = std::string;
using TrainID = std::string;
using RegionID = unsigned long long int;
using Name = std::string;
using Time = unsigned short int;

// Return values for cases where required thing was not found
StationID const NO_STATION = "---";
TrainID const NO_TRAIN = "---";
RegionID const NO_REGION = -1;
Name const NO_NAME = "!NO_NAME!";
Time const NO_TIME = 9999;

struct Coord
{
    int x = NO_VALUE;
    int y = NO_VALUE;
};

struct Station {
    StationID _id = NO_STATION;
    Name name = NO_NAME;
    Coord coord = NO_COORD;
    RegionID regionid = NO_REGION;
    std::vector<Departure> departure = {};
};

int main() {
	std::map<StationID, Station> _station_list = {]
	_station_list.insert({'1', {'1', 'test'}});
	return 0;
}

