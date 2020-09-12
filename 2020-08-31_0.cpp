#include <cstdio>
#include <typeinfo>
#include <iostream>
#include <bits/stdc++.h>

class X {
	int x;

	public:
	void setX(int x) { this->x = x; }
	int getX() { return this->x; }

	X() {}
};

int main() {
	auto x = new X();
	auto y = 0.0;
	x->setX(3);
	std::cout << typeid(y).name() << std::endl;
	return 0;
}

