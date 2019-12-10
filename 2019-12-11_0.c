#include<stdio.h>
#include<limits.h>

void printAsBin(char x) {
	char i;
	for(i=CHAR_BIT-1;i>0;--i)
		putchar('0'+!!(x&(1<<i)));
	putchar('\n');
}

main(){
	signed char x;
	unsigned char y;
	char z;
	x = y = z = 1 << CHAR_BIT - 1;
	printAsBin(x);
	printAsBin(y);
	printAsBin(z);
	x >>= 1;
	y >>= 1;
	z >>= 1;
	printAsBin(x);
	printAsBin(y);
	printAsBin(z);
}

