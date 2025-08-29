# include <stdio.h>

void main ()
{
	char name[20],city[20];
printf("Enter your name : ");
scanf("%s",&name);

printf("Enter your city : ");
scanf("%s",&city);	
	
	FILE *p;
	
    p = fopen("myfile.txt","w"); 
	
	fprintf(p,"My name is %s and My city name is %s ",name,city); 
	
	fclose(p); 


}
