#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	
	a = 3;
	b = 2;
	c = 1;

	printf("a: %d, b: %d, c: %d\n", a, b, c);

	(*((&a)+2)) += 1;

	printf("a: %d, b: %d, c: %d\n", a, b, c);

	return EXIT_SUCCESS;
}

