# include <stdio.h>

void main ()
{
	FILE *p;
	int length;
	
	p = fopen("file.txt","r");
	fseek(p,0,SEEK_END);
	
	fprintf("Size = %d bytes",length);
}
