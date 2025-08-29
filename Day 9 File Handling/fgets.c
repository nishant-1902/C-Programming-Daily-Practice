# include <stdio.h>

void main ()
{
FILE *p;

p = fopen("myfile.txt","r");

char arr[200];

fgets(arr,200,p); //print on console with spaces

printf("%s",arr);

fclose(p);

}
