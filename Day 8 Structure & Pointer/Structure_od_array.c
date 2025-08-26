# include<stdio.h>
# include<string.h>

struct student   // declaration of struct 
{
	int rollno;
	char name[30];
}s[5];

void main()
{  
    int i;
        
    printf("\nEnter rool no and name : ");
    for(i = 0; i < 5; i++)
	{
		scanf("%d%s",&s[i].rollno,&s[i].name);
	}
	
	printf("\n Students details : \n");
	for(i = 0; i < 5; i++)
	{
		printf("\n%d\t%s",s[i].rollno,s[i].name);
	}
}
