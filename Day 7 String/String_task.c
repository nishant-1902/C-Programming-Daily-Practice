# include<stdio.h>
# include<string.h>

void main ()
{
	char ch1[20] = "hi ";
	char ch2[20] = "hello ";
	char ch3[20] = "Welcome ";
	char ch4[20] = "good morning ";
	
	strcat(ch1,ch2);
	strcat(ch1,ch3);
	strcat(ch1,ch4);
	

	printf("%s\t",ch1);
}
