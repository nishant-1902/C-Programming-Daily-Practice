# include <stdio.h>
# include <conio.h>

void main()
{
	int numbers[5];
	int i;
	
	printf("Enter your array elements : ");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&numbers[i]);
	}
	
	printf("\n Array elements are : \n");
	for(i = 0; i < 5; i++)
	{
		printf("%d",numbers[i]);
	}
//	scanf("%d",&numbers[0]);
//	scanf("%d",&numbers[1]);
//	scanf("%d",&numbers[2]);
//	scanf("%d",&numbers[3]);
//	scanf("%d",&numbers[4]);
}
