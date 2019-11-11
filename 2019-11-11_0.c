#include <stdio.h>

main() {
	int i;

	for (i = 1;i <= 16384;i += i)
		printf(
			" printf() returned %d.\n",
			printf("%d", i)
		);
}

