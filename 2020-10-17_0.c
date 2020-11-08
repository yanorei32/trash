#include <stdio.h>
#include <math.h>
#include <time.h>
#include <limits.h>

main(int argc) {
	unsigned int i = 0;
	unsigned int n = UINT_MAX;
	volatile double x = 0;
	float start;
	

	start = (float) clock() / CLOCKS_PER_SEC;
	for (i = 0; i < n; ++i) {
		asm("nop");
	}
	printf("loop: %f\n", (clock() / CLOCKS_PER_SEC) - start);

	start = (float) clock() / CLOCKS_PER_SEC;
	for (i = 0; i < n; ++i) {
		asm("nop");
		x = atan(argc - 1);
	}
	printf("loop: %f\n", (clock() / CLOCKS_PER_SEC) - start);
}

