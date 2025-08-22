# include <stdio.h>
# include <conio.h>

//  even or odd
//
//void evenodd (int num)
//{
//	if( num % 2 == 0)
//	{
//		printf("\nEven number");
//	}
//	else
//	{
//		printf("\nOdd number");
//	}
//}
//
//void main()
//{
//	evenodd(5);
//	evenodd(10);
//}


// Addtion function


void addition (int num1 , int num2)  // parameters  num1 &  num2 are formal values
{
	int result;
	result = num1 + num2;
	printf("Addition : %d",result);
}

void main ()
{
	int n1 ,n2; // actual values
	printf("\nEnter number 1 & number 2 : ");
	scanf("\n%d%d",&n1,&n2);
	addition(n1,n2);  // arguments
}
