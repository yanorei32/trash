#include <stdio.h>

void countup_variable(int*p) {
	(*p)++;
	printf("%d\n", *p);
}

int main() {
	const CONSTANT_VARIABLE = 0;
	countup_variable(&CONSTANT_VARIABLE);
	countup_variable(&CONSTANT_VARIABLE);
	countup_variable(&CONSTANT_VARIABLE);
	countup_variable(&CONSTANT_VARIABLE);
	return 0;
}
