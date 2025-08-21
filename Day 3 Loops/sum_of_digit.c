# include <stdio.h>
# include <conio.h>

void main () 
{
	int num = 121, sum = 0;
	
	while(num > 0)
	{
		int digit = num % 10; // digit = 1
		sum = sum + digit; // sum = 1
		num = num / 10; // num = 1 2
	}
	printf("Sum=%d",sum);
}
