#include<stdio.h>
#include<string.h>  // string.h gives function instead scanf & printf 

void main ()
{
//	char name [10];
//	printf("\nEnter your name : ");
//	scanf("%s",&name);
//	printf("\nMy name is %s",name);


    char name[10];
    printf("\nEnter your name : ");
    gets(name); // string.h function (scanf)
    printf("My name is ");
    puts(name); // string.h function (printf)
}
