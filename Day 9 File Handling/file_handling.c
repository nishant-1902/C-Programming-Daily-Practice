# include <stdio.h>
 
 // r , w , a , r+ , w+, a+ 

void main ()
{
	FILE *p;
	
    p = fopen("myfile.txt","a"); // opening file
	
	fprintf(p,"Hello I am Nishant Jadhav"); // writing a file
	
	fclose(p); // closing file
}
