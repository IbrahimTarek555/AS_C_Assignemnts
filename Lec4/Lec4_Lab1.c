#include <stdio.h>

/*This is the main*/
int main()
{
	/*Intializing variables*/
	int Number;
	
	/*Scanning the number from the user*/
	printf("Enter the number: ");
	scanf("%d", &Number);
	
	/*Checking if the number is a power of 2 or not*/
	if(Number == 0)
	{
		printf("You entered zero and it has no power.");
	}
	else if(Number == 1)
	{
		printf("This number is not a power of 2.");
	}

	else if((Number & (Number - 1)) == 0)
	{
		printf("This number is a power of 2.");
	}
	else
	{
		printf("This number is not a power of 2.");
	}
	
	return 0;
}