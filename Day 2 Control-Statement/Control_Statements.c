#include<stdio.h>
#include<conio.h>

void main ()
{
   int num;
   printf("Enter the number : ");
   scanf("%d",&num);  // inpur from user
   (num%2 == 0)? printf("Number is even") : printf("Number is odd"); // ternary operator
   
//   printf("%d\n",num); // input number

//   printf("%d\n",num); 	// %u also used to print input address
 
   char name[50],city[50]; // if the datatype is similar use in this order
   printf("\nEnter your name and city : ");
   scanf("%s%s",&name,&city);
   printf("\nMy Name is %s and I am From %s city",&name,&city);
}
