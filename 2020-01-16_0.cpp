#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

#include <boost/algorithm/string/classification.hpp> 
#include <boost/algorithm/string/split.hpp>

using namespace std;

int main() {
	string input;
	cin >> input;

	if (input.length() <= 2) {
		cout << input << endl;
		return EXIT_SUCCESS;
	}

	if (input.find("--") != string::npos) {
		cerr << "Illegal Input" << endl;
		return EXIT_FAILURE;
	}

	vector<string> splitted;
	boost::split(splitted, input, boost::is_any_of("-"));

	char latestChar = '\0';
	for (const auto& str : splitted) {
		if (latestChar) {
			for (char c = (latestChar + 1); c < str[0]; ++c) {
				cout << c;
			}
		}

		if (str.empty()) {
			cout << '-';
			continue;
		}

		cout << str;
		latestChar = str[str.length() - 1];
	}

	cout << endl;
	return EXIT_SUCCESS;
}

