#include <stdio.h>

int main () {
		int x[10];
		int y;
		int z;
		y=0;
		z=0;

	A:	scanf ("%d",&x[y]);
		if (y<9) {y=y+1; goto A;};


		int m;
		int t;
		int n;
		m=0;
		n=0;
		
	C:	n=0;
	D:	if (x[m]>x[m+1])
			{t=x[m];
			 x[m]=x[m+1];
			 n=n+1;
			 x[m+1]=t;};
		if (m<8) {m=m+1; goto D;};
		if (n>0) {m=0; goto C;};

	
		printf ("\n");
	B:	printf ("%d\n",x[z]);
		if (z<9) {z=z+1; goto B;};
}
