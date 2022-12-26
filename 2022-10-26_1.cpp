#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Account {
	public:
		int credit;
		string name;

		Account(string name, int credit) {
			this->credit = credit;
			this->name = name;
		}

		void debug_print_self_information() {
			cout << "Name: " << this->name << endl;
			cout << "Credit: " << this->credit << endl;
		}

		void transfer(Account *to, int amount) {
			cout << "Transfered: " << amount << endl;
			this->credit -= amount;
			to->credit += amount;
		}
};

int main(int argc, char** argv) {
	auto hanako = new Account("Hanako", 50);
	auto tarou = new Account("Tarou", 100);

	hanako->debug_print_self_information();
	tarou->debug_print_self_information();

	tarou->transfer(hanako, 30);

	hanako->debug_print_self_information();
	tarou->debug_print_self_information();

	return 0;
}
