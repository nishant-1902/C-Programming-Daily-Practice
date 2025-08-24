# include <stdio.h>

void show(int*num)
{
	printf("\nBefore function call = %d",*num); // 10
	(*num)+= 10;
	printf("\nAfter adding = %d",*num); // 20
}

int main()
{
	int a = 10;
	printf("\n Before function call a = %d",a); // 10
	
    show(&a);
    
    printf("\nAfter function call a = %d",a); // 20
}
