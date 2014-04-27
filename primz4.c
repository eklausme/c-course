#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc, char *argv [2]) {
	int unten=atoi(argv[1]);
	int oben=atoi(argv[2]);
	int x=2;

A:	if (unten%x==0) {
		if (x>=unten) {printf ("Die Zahl %d ist eine Primzahl.\n", unten); if (unten<oben) {unten++; x=2; goto A;}}
		if (unten<oben) {unten++; x=2; goto A;}
		if (unten>=oben) {return 0;}
			}

	if (unten%x!=0) {
		if (x<unten) {x++; goto A;}
		if (x>=unten) {printf ("Die Zahl %d ist eine Primzahl.\n", unten); unten++; x=2; goto A;}
			}
}