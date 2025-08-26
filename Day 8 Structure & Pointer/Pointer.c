# include <stdio.h>
# include <conio.h>

void main()
{
	int num = 10;
	
	int *ptr = &num; //pointer
	
	printf("%d",num);   //10
	printf("\n%d",*ptr);  //10
	printf("\n%d",ptr);  // Memory address
}
