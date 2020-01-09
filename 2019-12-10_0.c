#include <stdio.h>
#include <limits.h>

void printAsBin(unsigned char x) {
	signed char i;

	for (i = CHAR_BIT - 1; i + 1; --i)
		putchar('0' + !!(x & (1 << i)));

	putchar('\n');
}

unsigned char setBit(unsigned char x, unsigned char bit) {
	return x | (1 << bit);
}

unsigned char unsetBit(unsigned char x, unsigned char bit) {
	return x & ~(1 << bit);
}

unsigned char getLowBits(unsigned char x, unsigned char bit) {
	return x & ~((~(x^x)) << bit);
	return x & (-1 << bit);
}

unsigned char rightrot(unsigned char x, unsigned char bit) {
	/* ~(~(x^x) >> 1) */

	return (
		(
			x & (
				(
					~(x^x)
				) << (
					bit % (CHAR_BIT * sizeof(x))
				)
			)
		) >> (
			bit % (CHAR_BIT * sizeof(x))
		)
	) | (
		(
			x & (
				(
					~(x^x)
				) >> (
					CHAR_BIT * sizeof(x) - (
						bit % (CHAR_BIT * sizeof(x))
					)
				)
			)
		) << (
			CHAR_BIT * sizeof(x) - (
				bit % (CHAR_BIT * sizeof(x))
			)
		)
	);
}

unsigned char reverseBit(unsigned char x) {
	int val, i;

	val ^= val;

	for (i ^= i; i < CHAR_BIT; ++i)
		val |= (
			!!(
				x & (
					1 << (CHAR_BIT - 1 - i)
				)
			)
		) << i;

	return val;
}

main() {
	printAsBin(0x12);
	/* printAsBin(reverseBit(0x12)); */
	printAsBin(rightrot(0x12, 1));
	printAsBin(rightrot(0x12, 2));
	printAsBin(rightrot(0x12, 3));
}

