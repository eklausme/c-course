#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

int main (int argc, char *argv[]) {
	int i, z;
	char s[200];
	char deutsch[5][80];
	char englisch[5][80];
	int x=0,y=-1,c,flag=0;
	FILE *fp;
	fp=fopen(argv[1],"r");
	if (fp==NULL) {printf ("Die Datei konnte nicht geoeffnet werden."); return 1;};
B:	c=fgetc (fp);
	y++;
	if (c=='=') {c=fgetc (fp); flag=1; deutsch[x][y]=0; y=0;}
	if (c=='\n') {c=fgetc (fp); flag=0; englisch[x][y]=0; y=0; x++; }
	if (flag>0) {englisch[x][y]=c;}
	if (flag<=0) {deutsch[x][y]=c;}
	if (c!=EOF) {goto B;} else {fclose (fp);}

	for (i=0; i<5; ++i)
		printf("%d Zeile: %s = %s\n", i, deutsch[i], englisch[i]);

	srand(time(0));
A:	z=rand()%5;
	printf("%s\n",deutsch [z]);
	scanf ("%s",s);
	if (strcmp (s,"stop")==0) goto Exit;
	if (strcmp (s,englisch [z])==0) printf ("Wunderbar, das war richtig!\n");
	else printf ("Das war leider falsch!\n");
	goto A;
Exit:	printf ("Vielen Dank fuers Vokabeln lernen!");
}
