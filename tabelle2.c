#include <stdio.h>

int main() {
	int x, y, z;

	for (x=1; x<=10; ++x) {
		for (y=1; y<=10; ++y) {
			for (z=1; z<=10; ++z)
				printf(" %2d*%2d*%d", x, y, z);
			printf("\n");
		}
	}

	return 0;
}
