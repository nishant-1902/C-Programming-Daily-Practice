# include <stdio.h>
 


void main ()
{
	FILE *p;
	
    p = fopen("myfile.txt","w"); // opening file
	
	fputs("Hello I am Nishant Jadhav",p); // writing a file
	
	fclose(p); // closing file
}
