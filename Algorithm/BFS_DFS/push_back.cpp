#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main () {
   std::vector<int> numbers;

    numbers.push_back(10); // Adds 10 to the end of the vector
    numbers.push_back(20); // Adds 20 to the end of the vector
    numbers.push_back(30); // Adds 30 to the end of the vector

    std::cout << "Elements in vector (push_back): ";
    for (auto it : numbers) {
        std::cout << it << " ";
    }
    std::cout << "\n";

    numbers.emplace_back(40); // Constructs and adds 40 in place at the end
    numbers.emplace_back(50); // Constructs and adds 50 in place at the end

    std::cout << "Elements in vector (emplace_back): ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}