# include <stdio.h>
// factorial with loop

// void main ()
// {
// 	int num = 5; // 5*4*3*2*1 = ?
// 	int i , result = 1;
// 	
// 	for(i=5; i>=1; i--)
// 	{
// 		result = result * i;
// 			printf("\n%d",result);
//
//	}
// }


// factorial with reccurssion function
//   int factorial(int num)
//   {
//   	   if (num == 0)
//   	   {
//   	   	return 1;
//	   }
//	   else if (num == 1)
//	   {
//	   	return 1;
//	   }
//	   else
//	   {
//	   	return num * factorial(num - 1); // recurssion
//	   	        
//	   }
//   }
//   
//   void main ()
//   {
//   	   printf("%d",factorial(5));
//   }

     // addition of 1 -10 numbers
     int addition(int num)
   {
   	   if (num == 0)
   	   {
   	   	return 1;
	   }
	   else if (num == 1)
	   {
	   	return 1;
	   }
	   else
	   {
	   	return num + addition(num-1); // recurssion
	   	        
	   }
   }
   
   void main ()
   {
   	   printf("%d",addition(10));
   }
