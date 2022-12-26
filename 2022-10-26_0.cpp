#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

struct {
	string name;
	int credit;
} typedef Account;

void printAccountInformation(Account a) {
	cout << "Name: " << a.name << endl;
	cout << "Credit: " << a.credit << endl;
}

void transfer(Account *from, Account *to, int amount) {
	cout << "Transfered: " << amount << endl;
	from->credit -= amount;
	to->credit += amount;
}


int main(int argc, char** argv) {
	Account tarou, hanako;

	tarou.name = "Tarou";
	tarou.credit = 100;

	hanako.name = "Hanako";
	hanako.credit = 50;

	printAccountInformation(hanako);
	printAccountInformation(tarou);

	transfer(&tarou, &hanako, 20);

	printAccountInformation(hanako);
	printAccountInformation(tarou);
}
