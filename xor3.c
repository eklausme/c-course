#include <stdio.h>
int main (int argc, char *argv[])
{		char pwd [1000];
		int i; i=0; int c; int x;
		//printf ("Bitte geben sie eine Schuessel ein.\n");
		gets (pwd);
		//printf("%s", pwd);
		int n;
		FILE *ROMAN;
		FILE *crypt;
		ROMAN=fopen (argv[1],"rb");
		if (ROMAN==NULL) {printf ("Die Datei konnte nicht geoeffnet werden..."); return 1;};	
		crypt=fopen(argv[2], "wb");
	A:	c=fgetc (ROMAN);
		if (c!=EOF) {
			x=c^pwd[i];
			i=i+1;
			if(pwd[i]=='\0') {i=0;};
			fprintf (crypt,"%c",x);
			goto A;};
		fclose (ROMAN);
		fclose (crypt);}