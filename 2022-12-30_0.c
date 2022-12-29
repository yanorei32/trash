#include <stdio.h>

void print_diff(void *first, void *last) {
	printf("%ld\n", last - first);
}

int main() {
	int a[] = {0, 1};
	long long b[] = {0, 1};
	print_diff(&a[0], &a[1]);
	print_diff(&b[0], &b[1]);
}
