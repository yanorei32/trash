#include <cstdio>
#include <cstdlib>
#include <iostream>

struct Base {
	virtual std::string ToString() {
		return "Base";
	};
};

struct Derived : Base {
	std::string ToString() override {
		return "Derived";
	}
};

void printDescription (Base *x) {
	std::cout << x->ToString() << std::endl;
}

int main() {
	Base b;
	Derived d;
	std::cout << b.ToString() << std::endl;
	std::cout << d.ToString() << std::endl;

	std::cout << ((Base)d).ToString() << std::endl;
	printDescription(&b);
	printDescription(&d);
	return EXIT_SUCCESS;
}

