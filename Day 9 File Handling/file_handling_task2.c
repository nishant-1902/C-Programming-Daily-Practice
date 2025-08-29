# include <stdio.h>
 


void main ()
{
	FILE *p;
//    p = fopen("myfile.txt","w"); 
//	fputs("Hello I am Nishant Jadhav",p);
	
    p = fopen("myfile.txt","r");
	char arr[200];
    fgets(arr,200,p);
    
    p = fopen("myfile2.txt","w"); 
	fprintf(p,"%s",arr);
    
    
	
	
}
