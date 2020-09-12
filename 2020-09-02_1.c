#include <stdio.h>

main() {
	char s[7];
	int N, i, cnt = 0;

	scanf("%d", &N);

	for (i = 1; i <= N; cnt += sprintf(s, "%d", i++) % 2);

	printf("%d\n", cnt);
}

