#include <stdio.h>
int main (int argc, char *argv[])
{	int n;
	int c;
	int x=0;
	int y=0;
	FILE *ROMAN;
	ROMAN=fopen (argv[1],"r");
	if (ROMAN==NULL) {printf ("\nDie Datei konnte nicht geoeffnet werden."); return 1;};
A:	c=fgetc (ROMAN);
	if (c=='{') {y++;}
	if (c=='}') {y--; if (y<0) {printf ("\nEs wurde eine geschweifte Klammer geschlossen, ohne dass eine anfing."); y=0;}}
	if (c=='(') {x++;}
	if (c==')') {x--; if (x<0) {printf ("\nEs wurde eine Klammer geschlossen, ohne dass eine anfing."); x=0;}}
	if (c!=EOF) {printf ("%c",c); goto A;};
	if (x!=0) {printf ("\nDie Datei besitzt eine ungleiche Anzahl an Klammern.");}
	if (y!=0) {printf ("\nDie Datei besitzt eine ungleiche Anzahl an geschweiften Klammern.");}
	fclose (ROMAN);}
