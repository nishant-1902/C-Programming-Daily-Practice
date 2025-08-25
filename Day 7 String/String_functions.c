#include<stdio.h>
#include<string.h>

void main()
{
	char ch1[20] = "Hello";
	char ch2[20] = "World";
	char ch3[20];
	
//	               // string length  (strlen)

//	printf("Length = %d",strlen(ch1)); // written integer value

//                    // Or
//    
//    int length = strlen(ch1);
//    printf("length = %d",length);


                  // String copy (strcpy)
             
//	strcpy(ch3,ch1);
//	printf("%s",ch3);

               	  // string concatnation (strcat)
               	  
//    strcat(ch1,ch2);
//	printf("%s",ch1);     

                  // String comparison (strcmp)
				  
//	printf("%d",strcmp("Hello","Hello"));
	
	               //or
				   
//	if(strcmp(ch1,ch2) == 0)
//	{
//		printf("Equal");
//    }
//	else
//	{
//		printf("Not equal");
//    }			   			        	  
					 	    
                 // String reverse (strrev)
				  
//    printf("\n%s",strrev(ch1));
//    printf("\n%s",strlwr(ch2)); // for lower case char
//    printf("\n%s",strupr(ch1)); // for upper case char

                 // Sub string (strstr)
                 
      char str[100] = " c is a programming language";
      
      // strstr(str,"is");
      
	  printf("\nOriginal string = %s",str);
	  printf("\nSub string = %s",strstr(str,"is"));            
}
