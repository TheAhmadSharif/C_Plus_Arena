#include "Person.h"  // Note! Implementation file includes the corresponding header (definition) file!
#include <iostream>
#include <string>

using namespace std;

Person::Person(string const& name):
    name(name) {
}

void Person::print() const {
    cout << "owner" << endl;
}