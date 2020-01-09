#include <string>
#include <stdio.h>

int main() {
	std::string a;
	a = "Hello";
	printf("%ld\n", a.length());
	printf("%ld\n", a.capacity());
	a = "He";
	printf("%ld\n", a.length());
	printf("%ld\n", a.capacity());
	printf("%ld\n", a.max_size());
	return 0;
}

