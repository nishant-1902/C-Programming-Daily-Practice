# include <stdio.h>

void main()
{
	int *ptr = NULL;
	
	int num = 10;
	ptr = &num;
	
	if (ptr == '\0')
	{
		printf("Null pointer");
	}
	else
	{
		printf("%d",*ptr);
	}
 } 
