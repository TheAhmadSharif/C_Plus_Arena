#include "student.hh"
#include <iostream>
#include <string>

using namespace std;


int main() {
	Student student1 = Student("Samuel", 24);
	student1.IntroduceYourself();
	student1.setName("Dennis Ritchie");
	student1.setAge(60);
	cout << "________ \n";
	student1.IntroduceYourself();
	return 0;
}