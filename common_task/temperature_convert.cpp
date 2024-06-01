#include <iostream>

using namespace std;

int main() {
    cout << "Fahrenheit: ";  
    double fahrenheit;
    cin >> fahrenheit;

    double c = (fahrenheit-32)/1.8;  
    
    cout << c << endl;  

    return 0;
}
