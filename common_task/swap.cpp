#include <iostream>

int main () {

    int a = 1;
    int b = 2;

    int c;
    c = a; // 1

    a = b;
    b = c;

    std::cout << a << std::endl;
    std::cout << b << std::endl;


    return 0;
}