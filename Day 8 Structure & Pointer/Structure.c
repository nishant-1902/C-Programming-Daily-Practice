# include<stdio.h>
# include<string.h>

struct student   // declaration of struct 
{
	int rollno;
	char name[30];
}s1;

void main()
{
	printf("\nEnter your rollno : ");
	scanf("%d",&s1.rollno);
	
	printf("\nEnter your name : ");
	scanf("%s",&s1.name);
	
	
	printf("\nStudent roll no is %d",s1.rollno);
	printf("\nStudent name is %s",s1.name);
}
