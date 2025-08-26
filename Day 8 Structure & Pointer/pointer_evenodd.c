# include <stdio.h>

void evenodd(int *ptr)
{
	if(*ptr % 2 == 0)
	{
		printf("Even number");
	}
	else
	{
		printf("odd number");
	}
}

void main()
{
	int num = 10;
	evenodd(&num);
}
