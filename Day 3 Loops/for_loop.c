# include <stdio.h>
# include <conio.h>

void main ()
{
	// print numbers 1-10
	
	int i;
	for( i=1; i<=10; i++)  
	{
		printf("%d",i);
	}
	
	// print 10 time sorry
	
	int  counter;
	for(counter = 1; counter <= 10; counter++)
	{
		printf("\nSorry");
	}
	
	// print reverse number 1-10
	
	int num;
	for(num = 10; num >= 1; num--)
	{
		printf("\n%d",num);
	}
}
