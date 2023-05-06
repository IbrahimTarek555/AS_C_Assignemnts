#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, i = 0, Check1, Check2 = 0;
	
	
	/*Message to the user*/
	printf("Enter a positive number: ");
	scanf("%d", &Num);

	/*Checking if the number is prime or not.*/
	for(i = 1; i <= Num; i++)
	{
		Check1 = Num % i;
		
		if(Check1 == 0)
		{
			Check2++;
		}
	}
	
	
	/*Printing if the number is a prime or not*/
	if((Check2 == 0) || (Check2 > 2))
	{
		printf("Number %d is not a prime number", Num);
	}
	else if(Check2 <= 2)
	{
		printf("Number %d is a prime number", Num);
	}

	return 0;
}