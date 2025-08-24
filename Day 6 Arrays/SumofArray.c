# include <stdio.h>
# include <conio.h>

void main()
{
	int numbers[5];
	int i,sum = 0;
	
	
	printf("Enter your array elements : ");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&numbers[i]);
	}
	
		
	for(i = 0; i < 5; i++)
	{
	    sum = sum + numbers[i];
	}
	printf("Sum = %d ",sum);
	
}
