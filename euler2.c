#include <math.h>
#include <stdio.h>
int main () {
	int i=0;
	double n=1;
	double x=1;
	double y=0;

A:	y++;
	n=n*y;
	x=x+1/n;
	i++;
	if (i>=100) {printf("%20.18f\n",x); return 0;} else {goto A;};}