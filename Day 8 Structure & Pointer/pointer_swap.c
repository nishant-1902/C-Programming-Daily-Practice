# include <stdio.h>

void main()
{
	int num1 = 20;
	int num2 = 30;
	
	int *p1 = &num1;
	int *p2 = &num2;
	
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    
    printf("Num1 = %d",*p1);
    printf("\nNum2 = %d",*p2);
}
