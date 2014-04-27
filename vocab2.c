#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <string.h>
int main (int argc, char *argv[]) {
	int z;
	char s[200];
	char deutsch[1000][100];
	char englisch[1000][100];
	int x=0,y=0,c,flag=0;
	FILE *fp;
	fp=fopen(argv[1],"r");
	if (fp==NULL) {printf ("Die Datei konnte nicht geoeffnet werden."); return 1;};
B:	c=fgetc (fp);
	if (c==EOF) {goto C;}
	else if (c=='=') {c=fgetc (fp); flag=1; deutsch[x][y]=0; y=0; }
	else if (c=='\n') {c=fgetc (fp); flag=0; englisch[x][y]=0; y=0; x++;}
	else if (c=='#') {flag=-1;}
	if (flag==1) {englisch[x][y]=c;}
	else if (flag==0) {deutsch[x][y]=c;}
	else if (flag==-1) {c=fgetc (fp);}
	y++;
	goto B;

C:	fclose(fp);

	srand(time(0));
A:	z=rand()%x;
	printf("%s\n",deutsch [z]);
	scanf ("%s",s);
	if (strcmp (s,"stop")==0) goto Exit;
	if (strstr (englisch [z],s)!=NULL) printf ("Wunderbar, das war richtig!\n");
	else printf ("Das war leider falsch!\n");
	goto A;
Exit:	printf ("Vielen Dank fuers Vokabeln lernen!");
}
