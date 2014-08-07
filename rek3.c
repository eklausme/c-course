#include <stdio.h>
#include <string.h>

int zaehler=0;

int lesen (char *name) {
	FILE *fp; char* s, *t; char buf[1026];

	if (++zaehler > 20) {return 1;}

	fp=fopen (name,"r");
	if (fp==NULL) { printf ("Could not open file %s\n",name); return 1;};
A:	s=fgets (buf, 1024, fp);
	if (s!=NULL) {
		if (strncmp(s,"#include",8) == 0) {
			t = s;
B:			if (*t != '\n') {t++; goto B;}
			else {*t = 0;}
			printf(">>> Found #include in file |%s|.\n", s+9);
			lesen(s+9);
		}
		printf ("%s", s);
		goto A;
	}
	fclose (fp);
	return 0;
}


int main (int argc, char *argv[]) {
	return lesen(argv[1]);
}

