#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	for (;;) {
		cin >> s;

		if (s.starts_with("Hello"))
			cout << "> Hello" << endl;
	}
}

