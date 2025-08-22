# include <stdio.h>
# include <conio.h>

void swap (int num1 , int num2)
{
	printf("before swapping number 1 is : %d and number 2 is %d\n",num1,num2);
	int temp = num1; // temp =  5;
	num1 = num2;     // num1 = 10;
	num2 = temp;     // num2 = 5;
	
	printf("after swapping number 1 is : %d and number 2 is %d\n",num1,num2);
}

void main ()
{
    swap(5,10);	
}
