#include <stdio.h>

void x_fnc(int x) {
	x++;
}

void xp_fnc(int *x) {
	(*x)++;
}

int main() {
	int x = 0;
	printf("x: %d\n", x);
	x_fnc(x);
	printf("x: %d\n", x);
	xp_fnc(&x);
	printf("x: %d\n", x);
}

