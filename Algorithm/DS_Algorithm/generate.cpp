#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;

int f()
{ 
    static int i;
    return ++i;
}
 
int main()
{
   std::vector<int> v(5);  
   std::generate(v.begin(), v.end(), [n = 1] () mutable { return n++; });


    for (auto &i:v) {
     cout <<  i << "\n";
    }
}