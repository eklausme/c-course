#include <stdio.h>

int main () {
	double x=1;
	double y=1;

A:	y=y+2;
	x=x-1/y;
	y=y+2;
	x=x+1/y;
	
	if (y>=9999)
		{x=x*4;
		printf ("%20.18f\n", x);
		return 1;}
	else goto A;}
