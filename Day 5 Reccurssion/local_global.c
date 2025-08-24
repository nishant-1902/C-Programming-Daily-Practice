#include <stdio.h>

void test()
{
	int num = 10;   // local variable
	printf("%d",num);
}

void demo ()
{
	printf("%d",num); // error
}

void main ()
{
	test();
	demo();
}
