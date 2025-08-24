# include <stdio.h>
# include <conio.h>

void main ()
{
	int numbers [2][2];
	int i,j;
	
	printf("\n Enter your array element: ");
	for(i = 0; i < 2; i++)
	{
		for( j = 0; j < 2; j++)
		{
			scanf("%d",&numbers[i][j]);
		} 
	}
	
	for(i = 0; i < 2; i++)
	{
		for( j = 0; j < 2; j++)
		{
			printf("%d\t",numbers[i][j]);
		} 
		printf("\n");
	}
	
}
