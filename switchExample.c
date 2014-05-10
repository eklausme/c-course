#include <stdio.h>
#include <math.h>

int main ()

{	int x=0;
A:	if (x<40) {x++;}
	switch (x) {
		case 5: printf ("Fuer x=%d gilt: %f\n", x, log(x)); break;
		case 15: printf ("Fuer x=%d gilt: %f\n", x, sin(x)); break;
		case 20: printf ("Fuer x=%d gilt: %f\n", x, cos(x)); break;
		default: printf ("Fuer x=%d gilt: %f\n", x, sqrt(x)); break;}
	if (x==40) {return 0;} else {goto A;}
}
