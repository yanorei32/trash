#include <stdio.h>

struct {
	int x;
} typedef X;

void xCreator(X x[]) {
	X newX;
	for (int i = 0; i < 8; i++) {
		newX.x = i;
		x[i] = newX;
	}
}

void xViewer(X x[]) {
	for (int i = 0; i < 8; i++) printf("%d\n", x[i].x);
}

void xpCreator(X* x[]) {
	X newX;
	for (int i = 0; i < 8; i++) {
		newX.x = i;
		x[i] = &newX;
	}
}

void xpViewer(X* x[]) {
	for (int i = 0; i < 8; i++) printf("%d\n", (*(x[i])).x);
}

int main() {
	puts("[x]");
	X x[8];
	xCreator(x);
	xViewer(x);

	puts("[xp]");
	X* xp[8];
	xpCreator(xp);
	xpViewer(xp);
}

