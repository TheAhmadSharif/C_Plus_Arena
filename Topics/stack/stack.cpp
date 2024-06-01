#include <iostream>
#include <stack>
using namespace std;

/* https://www.youtube.com/watch?v=LosrkzZK90g */

int main() {
	

	stack<int> s;
	s.push(2);
	s.push(4);
	s.push(5);
	s.push(9);

	while(!s.empty()) {
		int x;
		x = s.top();
		cout << x << "\n";
		s.pop();

	}
	return 0;
}