#include <stdio.h>
int main (int argc, char *argv[])
{		if (argc!=3) {printf ("Es werden eine Ein- und Ausgabedatei erfordert..."); return 4;};
		if (strcmp(argv[1],argv[2])==0) {printf ("Die Eingabe- und Ausgabedatei sind gleich. Verschlüsselung nicht möglich..."); return 3;};
		char pwd [1000];
		int i; i=0; int c; int x;
		printf ("Bitte geben sie einen Schuessel ein.\n");
		gets (pwd);
		//printf("%s", pwd);
		int n;
		FILE *ROMAN;
		FILE *crypt;
		ROMAN=fopen (argv[1],"rb");
		if (ROMAN==NULL) {printf ("Die Datei konnte nicht geoeffnet werden..."); return 1;};	
		crypt=fopen(argv[2], "wb");
		if (crypt==NULL) {printf ("Die Datei konnte nicht beschrieben werden..."); return 2;};
	A:	c=fgetc (ROMAN);
		if (c!=EOF) {
			x=c^pwd[i];
			i=i+1;
			if(pwd[i]=='\0') {i=0;};
			fprintf (crypt,"%c",x);
			goto A;};
		fclose (ROMAN);
		fclose (crypt); return 0;}