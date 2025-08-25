#include<stdio.h>
#include<string.h>

// asciii value : a - z = 97 to 122 ,  A - Z = 65 to 90

void main ()
{
	char name [200] = "nishant jadhav 1902";
	int i=0;
	int vowelcount=0;
	int digitcount=0;
	
	while(name[i] != '\0') // vowel count
	{
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
		{
			vowelcount++;
		}
		else if (name[i] >= '0' && name[i] <= '9' )  // digit count
		{
			digitcount++;
		}
		i++;
	}
	printf("\nvowels count = %d",vowelcount);
	printf("\ndigit count = %d",digitcount);
}
