#include <stdio.h>

struct X_t {
	int x;
} typedef X;

main() {
	int a = 3;
	int *x = &a;

	X b;
	X *y = &b;
	
	struct X_t c;
	struct X_t *z = &c;
	c.x = 3;
	z->x = 3;

	printf("%d\n", z->x);
}

