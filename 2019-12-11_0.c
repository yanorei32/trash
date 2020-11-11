#include<stdio.h>
#include<limits.h>

void printAsBin(unsigned char x) {
	signed char i;

	for (i = CHAR_BIT - 1; i >= 0; --i)
		putchar('0' + !!( x & (1 << i) ));

	putchar('\n');
}

main(){
	signed char x;
	unsigned char y;

	x = y = 1 << CHAR_BIT - 1;

	puts("x:");
	printAsBin(x);
	putchar('\n');

	puts("y:");
	printAsBin(y);
	putchar('\n');

	x >>= 1;
	y >>= 1;

	puts("x >>= 1:");
	printAsBin(x);
	putchar('\n');

	puts("y >>= 1:");
	printAsBin(y);
	putchar('\n');
}

