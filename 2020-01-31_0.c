#include <stdio.h>

fizzbuzzduzz (i)
{
	int isPrinted = 0;

	if (i) fizzbuzzduzz (i-1);

	if (!(i % 2) && ++isPrinted) printf("Fizz");
	if (!(i % 3) && ++isPrinted) printf("Buzz");
	if (!(i % 5) && ++isPrinted) printf("Duzz");

	if (!isPrinted) printf("%d", i);

	puts("");
}

main ()
{
	fizzbuzzduzz(30);
}

