  
#include <iostream>
using namespace std;
/*
	Generic Types: C++ Enables generic programming by means of special construct called templates.


	Function templates are special functions that can operate with generic types. 


	Generric type means any type of data. Usually in C++ one mus define the parameter datatype before call a function

	https://cplusplus.com/doc/oldtutorial/templates/

	template <typename Anything>
	Anything function_name(Anything v) {
		return v;
	}
*/

template <typename T>
T getData(T x) { 
	return x;
}
int main() {

    cout << getData(2.4) << "\n";
    cout << getData('C') << "\n";
 
    return 0;
}
