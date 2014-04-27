#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc, char *roman [2]) {
	int unten=atoi(roman[1]);
	int oben=atoi(roman[2]);
	int x=oben;
	int n=0;

A:	if (unten%x==0) {
		if (oben%x==0) {printf ("Der groesste gemeinsame Teiler von %d und %d lautet %d.\n", unten, oben, x);}
	}
	if (unten%x!=0||oben%x!=0) {
		x--; goto A;
	}
}