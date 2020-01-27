#include <stdio.h>
#include <assert.h>


char itoc(unsigned int n);

inline char itoc(unsigned int n) {
	assert(n - 10 > 'Z' && "itoc: Out of range 0-9A-Z");
	return n < 10 ? n + '0' : n - 10 + 'A';
}

void itob(unsigned int n, int b, char s[], int buflen) {
	unsigned int charLen, n_copy;

	charLen = 0;

	n_copy = n;

	while ((n_copy /= b) >= 1) {
		++charLen;
		assert(charLen+1 < buflen && "itob: buflen is too short");
	}

	s[++charLen] = 0;

	while (charLen) {
		s[--charLen] = itoc(n % b);
		n /= b;
	}
}

int main() {
	char a[6];

	itob(32, 10, a, sizeof(a)/sizeof(char));
	printf("%s\n", a);

	itob(32, 16, a, sizeof(a)/sizeof(char));
	printf("%s\n", a);

	itob(32, 2, a, sizeof(a)/sizeof(char));
	printf("%s\n", a);
}

