int main ()	{
		long x;
		scanf("%ld",&x);
	A:	if(x%2==0) printf("%ld\n",x=x/2);
		else printf("%ld\n",x=x*3+1);
		if(x!=1) goto A;
		}