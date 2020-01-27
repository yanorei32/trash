#include <stdio.h>

char itoc(unsigned int n);

inline char itoc(unsigned int n) {
	return n < 10 ? n + '0' : n - 10 + 'A';
}

void itob(unsigned int n, char s[], int b) {
	unsigned int charLen, n_copy;

	charLen = 0;

	n_copy = n;

	while ((n_copy /= b) >= 1) {
		charLen++;
	}

	s[++charLen] = 0;

	while (charLen) {
		s[--charLen] = itoc(n % b);
		n /= b;
	}
}

int main() {
	char a[128];

	itob(32, a, 2);
	printf("%s\n", a);

	itob(32, a, 10);
	printf("%s\n", a);

	itob(32, a, 16);
	printf("%s\n", a);
}

