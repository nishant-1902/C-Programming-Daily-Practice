#include<stdio.h>
#include<conio.h>

void main()
{
	int number , choice;
	printf("\n Enter Your Number : \n");
	scanf("%d",&number);
	printf("1. Check even or odd \n 2. Check Positive or Nigative Number\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			(number % 2 == 0)? printf("Even") : printf("odd");
			break;
		
		case 2:
		    (number >= 0)? printf("Positive") : printf("Negative");
			break;
			
		default:
		    break;		
	}
	return 0;
}
