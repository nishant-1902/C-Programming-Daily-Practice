# include <stdio.h>

void test()
{
 int a = 10; // only refresh memory. not update value 
 static int b = 10; // static variable continues the process for eg.10 11 12 13. one time memory acquired.
 
 a = a + 1;
 b = b + 1;
 
 printf("\n%d %d",a,b);	
}

void main()
{
  test();
  test();
  test();
  test();	
}
