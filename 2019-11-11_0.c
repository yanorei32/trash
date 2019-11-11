#include <stdio.h>
#include <stdlib.h>

int main(int, char**) {
	int i;

	for (i = 1;i <= 16384;i += i) {
		printf(
			" printf() returned %d.\n",
			printf("%d", i)
		);
	}

	return EXIT_SUCCESS;
}

