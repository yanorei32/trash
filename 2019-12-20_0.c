#include <stdio.h>
#include <stdlib.h>

int slowSum(int x) {
	int sum = 0;

	for (int i = 0;i <= x;i++)
		sum += i;

	return sum;
}

int fastSum(int x) {
	return (x + 1) * (x / 2) + (x & 1) * (x / 2 + 1);
}

int main(int argc, char** args) {
	unsigned long _;
	int x;
	_ = 0;
	x = atoi(args[1]);

	for (int i = 0; i < 1000 * 1000; i++) {
#ifdef SLOW
		_ += slowSum(x);
#elif FAST
		_ += fastSum(x);
#else
#error Please define FAST / SLOW
#endif
	}

	printf("%lu\n", _);
}

