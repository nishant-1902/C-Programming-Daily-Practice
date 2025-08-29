# include <stdio.h>
 


void main ()
{
	FILE *p;
	
    p = fopen("myfile.txt","w");
	
	fputs("good moring",p);
	
	fseek(p,27,SEEK_SET);
	
	fputs("welcome",p); 
	
    
	fclose(p); // closing file
}
