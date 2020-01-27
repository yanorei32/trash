#include <stdio.h>
#include <stdlib.h>

void reverse() {
	int c = getchar();
	if (c == EOF) return;

	reverse();
	putchar(c);
}

int main() {
	reverse();
	return EXIT_SUCCESS;
}

