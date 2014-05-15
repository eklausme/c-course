#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, ia, ib, t;
    if (argc < 3)
	return 1;
    ia = a = atoi(argv[1]);
    ib = b = atoi(argv[2]);

    do {
	t = a % b;
	a = b;
	b = t;
    } while (t != 0);

    printf("gcd(%d,%d)=%d\n", ia, ib, a);

    return 0;
}
