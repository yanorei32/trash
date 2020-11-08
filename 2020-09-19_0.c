#include <stdio.h>

int main() {
	int x, _, y, nl;
	int counter = 0;

	while ((nl = getchar()) != '\n') {}

	while (1) {
		x = getchar();
		if (x == EOF) {
			puts("No");
			return;
		}
		_ = getchar();
		y = getchar();
		nl = getchar();

		if (x == y) {
			counter += 1;
		} else {
			counter = 0;
		}

		if (counter == 3) {
			puts("Yes");
			return;
		}
	}
}
