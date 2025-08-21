# include <stdio.h>
# include <conio.h>

void main () 
{   
//    int Start,End,i;
//	printf("Start : ");
//	scanf("%d",&Start);
//	
//	printf("End : ");
//	scanf("%d",&End);
//	
//	for(i = Start; i <= End; i++)
//	{
//		printf("\n%d",i);
//	}
	
	
	// 1+2+3+4+5+6+7+8+9+10 = ?
	
//	int i , sum=0;
//	
//	for(i = 1; i <= 10; i++)
//	{
//		sum = sum + i;
//	}
//	printf("%d",sum);\

	
	// 1-2-3-4-5-6-7-8-9-10
	
	int i;
	
	for(i = 1; i<= 10; i++)
	{
	   if(i <= 9)
	   {
	   	printf("%d-",i);
	   }
	   else
	   {
	   	printf("%d",i);
	   }	
	}
}
