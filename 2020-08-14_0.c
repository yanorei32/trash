#include <stdio.h>


int main() {
	int c;

	int newline_cnt = 0;

	while ( ( c = getchar() ) != EOF ) {
		if ( c == '\n' ) {
			newline_cnt ++;

			if (newline_cnt == 2) {
				break;
			}
		} else {
			newline_cnt = 0;
		}
	}

	while ( ( c = getchar() ) != EOF ) {
		putchar(c);
	}
}

