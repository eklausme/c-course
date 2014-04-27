#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (int argc, char *argv [2]) {
	int unten=atoi(argv[1]);
	int oben=atoi(argv[2]);
	int x=3;
	int y;


	if (unten%2==0) {
		if (unten==2||unten==0) {printf ("Die Zahl %d ist eine Primzahl.\n", unten);}
		if (unten<oben) {unten++;} else {return 0;}
			}
	y=sqrt(unten);

A:	if (unten>=oben) {return 0;}
	if (unten%x==0) {
		if (x>y) {printf ("Die Zahl %d ist eine Primzahl.\n", unten); if (unten<oben) {unten+=2; y=sqrt(unten); x=3; goto A;}}
		if (unten<oben) {unten+=2; y=sqrt(unten); x=3; goto A;}
			}

	if (unten%x!=0) {
		if (x<y) {x+=2; goto A;}
		if (x>=y) {printf ("Die Zahl %d ist eine Primzahl.\n", unten); unten+=2; y=sqrt(unten); x=3; goto A;}
			}
}