#include <stdio.h>

int num = 10;   // global variable

void test()
{
	int num = 50;
	printf("%d",num); // 50
}

void demo ()
{
	printf("%d",num);  // 10
}

void main ()
{
	test();
	demo();
}
