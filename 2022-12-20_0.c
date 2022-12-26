#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

double getint(char **pos) {
	int n = 0;
	char c;
	GETINT_CONTINUE:switch (c=*(*pos)--) {
		case '0'...'9': n *= 10, n += c - '0'; goto GETINT_CONTINUE;
		default: (*pos)++; return n;
	}
}

double calc(char **pos) {
	double buf;
	CALC_CONTINUE:switch (*(*pos)--) {
		case '+': return calc(pos) + calc(pos);
		case '-': buf = calc(pos); return calc(pos) - buf;
		case '*': return calc(pos) * calc(pos);
		case '/': buf = calc(pos); return calc(pos) / buf;
		case '0'...'9': (*pos)++; return getint(pos);
		case ' ': goto CALC_CONTINUE;
		default: return 0.0;
	}
}

int main() {
	char *ptr = malloc(BUFFER_SIZE);
	fgets((char*restrict)ptr, BUFFER_SIZE, stdin);
	while (*(ptr++) - '\n');
	ptr -= 2;
	printf("ans = %fd\n", calc(&ptr));
}
