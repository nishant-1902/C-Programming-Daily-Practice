#include<stdio.h>
#include<conio.h>

void main ()
{
	int usernum;
	int originalnum = 54;
	printf("\nEnter your Number : ");
	scanf("%d",&usernum);
	
	if(usernum == originalnum)
	{
		printf("Number is match successfully");
	}
	else if(usernum >= originalnum)
	{
	    printf("Number is grater");
	}
	else if(usernum <= originalnum)
	{
		printf("Number is smaller");
	}
	else
	{
		printf("try again");
	}
}
