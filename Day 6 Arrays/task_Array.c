# include <stdio.h>
# include <conio.h>

void main()
{
	int numbers[5] = {10,20,30,40,50};    // output = 50,20,30,40,10
    
    int first = numbers[0];
    int last = numbers[4];
    
    numbers[0] = last;
    numbers[4] = first;
    
    int i;
    for( i = 0; i < 5; i++)
    {
    	printf("%d\t",numbers[i]);
	}
    
}
