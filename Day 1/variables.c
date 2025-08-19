#include<stdio.h> // header files, libraries and standard input and output
#include<conio.h> // console input output and it gives ready made functionalities

void main () //main method
{
	// varriables is the name of memory location
	
	int age = 21;
	printf("Number = %d \n",age); //21
	
	char ch = 'N';
	printf("Character is %c \n",ch); // charachter is N
	
	char name[] = "Nishant Shashikant Jadhav";
	printf("My Name is %s \n",name); // My Name is Nishant Shashikant Jadhav
	
	float marks = 71.30;
	printf("Floating marks is %f \n",marks); // 71.300003
	printf("Floating marks is %.f \n",marks); // 71
	printf("Floating marks is %.2f \n",marks); // 71.30
	
	double contact = 8421390102;
	printf("%lf \n",contact); // 8421390102.000000
	printf("%.2lf \n",contact); 
}
