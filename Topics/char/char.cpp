#include <iostream>
using namespace std;

int main() {
	char test1[] = "Test";
    const char *test2 = "Test2"; 

    /*const char * then the compiler must give a diagnostic if you attempt to modify the pointed-to value. you must not modify the contents of name. 

    will place "Test2" in the read-only parts of the memory, and making s a pointer to that makes any writing operation on this memory illegal.*/



    char* test3 = "Test";

    cout << test2 << "\n";


	return 0;
}