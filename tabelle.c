int main () {
	int x=1;
	int y=1;

A:	if (x==11) {return 0;}
	if (y<10) {
		printf("%d/%d\t", x, y);
		y++;
		goto A;
	}
	if (y==10) {
		printf("%d/%d\n", x, y);
		y=1;
		x++;
		goto A;
	}
}