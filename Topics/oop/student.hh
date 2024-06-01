#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		string Name;
		int Age;
	public:
		void IntroduceYourself() {
			cout << "Name : " << Name << "\n"; 
			cout << "Age : " << Age << "\n"; 
		}
		

		void setName(string name) {
			Name = name;
		}

		string getName() {
			return Name;
		}
		void setAge(int newage) {
			Age = newage;
		}

		int getAge() {
			return Age;
		}
		Student(string name, int age) {
			Name = name;
			Age = age;
		}
}; // Note Semicolon