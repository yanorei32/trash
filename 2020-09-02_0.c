#include <stdio.h>

max (a, b) {
	if (a < b) return b; else return a;
}

main() {
	char chars[] = {'A', 'C', 'G', 'T'};
	int c, maximumCnt, cnt, i, found;

	cnt = 0;
	maximumCnt = 0;

	while ( (c = getchar()) != -1 ) {
		found = 0;
		for ( i = 0; i < sizeof(chars) / sizeof(char); ++i ) {
			if ( chars[i] == c ) {
				found ++;
				break;
			}
		}
		if (!found) {
			maximumCnt = max(maximumCnt, cnt);
			cnt = 0;
		} else {
			cnt ++;
		}
	}

	printf("%d\n", maximumCnt);
}


