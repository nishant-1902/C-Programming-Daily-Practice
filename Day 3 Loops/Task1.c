# include <stdio.h>
# include <conio.h>

void main() 
{
	// task 1 : find greater number between two variables
	
//	int number1 , number2;
//	printf("Enter number 1 : ");
//	scanf("%d",&number1);
//	printf("Enter number 2 : ");
//	scanf("%d",&number2);
//	
//	if(number1 == number2)
//	{
//	   printf("Both numbers are equals");	
//	}
//	else
//	{
//		(number1 >= number2)?printf("Largest number is %d",&number1) : printf("Largest number is %d",&number2);
//	}

    // task 2 : find grater number between three variables
	
//	int number1 , number2 , number3;
//	printf("Enter number 1 : ");
//	scanf("%d",&number1);
//	printf("Enter number 2 : ");
//	scanf("%d",&number2);
//	printf("Enter number 3 : ");
//	scanf("%d",&number3);
//	
//	if(number1 >= number2 && number1 >= number3)
//	{
//		if(number1 == number2 && number1 == number3)
//		{
//			printf("All number are equals");
//		}
//		else
//		{
//			printf("largest number is %d",number1);
//		}
//	}  
//	    else if(number2 >= number3)
//		{
//		   printf("largest number is %d",number2);	
//	    }  
//	    else
//	    {
//	    	printf("largest number is %d",number3);
//		}


      // task 3 : check given char is uppercase,lowercase,digit,specialchar
      
//      char input;
//      printf("Enter the character : ");
//      scanf("%c",&input);
//      
//      if(input >= 'A' && input <= 'Z')
//	  {
//      	printf("The given %c  is uppercase",input);
//	  }
//	  else if(input >= 'a'&& input <= 'z')
//	  {
//	  	printf("The given %c is lowecase",input);
//	  }
//	  else if(input >= 0 && input <= 9)
//	  {
//	  	printf("The given %c is number",input);
//	  }
//	  else
//	  {
//	  	printf("The given %c is special character",input);
//	  }


      // Task 4 : ATM
      
      int choice;
      float balance = 2000.0,amount;
      
      printf("1.Withdraw\n");
      printf("2.Deposit\n");
      printf("3.Check balance\n");
      printf("Enter your choice : ");
      scanf("%d",&choice);
      
      if(choice == 1)
	  {
      	printf("Enter amount to be Withdraw : ");
      	scanf("%f",&amount);
      	
      	if(amount > balance)
      	{
      	  printf("Insufficient balance!\n");	
	    }
	    else
		{
	      balance = balance - amount;
	      printf("Withdraw Succesfull. New balance: %.2f\n",balance);
		}
	  }
	  else if (choice == 2) 
	  {
	  	printf("Enter amount to Deposit : ");
	  	scanf("%f",&amount);
	  	balance = balance + amount;
	  	printf("Deposit Succesfull. New balance: %.2f\n",balance);
	  }
	  else if (choice == 3)
	  {
	  	printf("Current balance: %.2f\n",balance);
	  }
}
