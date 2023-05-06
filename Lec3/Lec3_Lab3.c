#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Number;
	
	/*Scanning the number from the user*/
	printf("Please enter the number: ");
	scanf(" %d", &Number);

	
	/*discovering if odd number or even number*/
	if(Number % 2)
	{
		printf("Number %d is odd.", Number);
	}
	else
	{
		printf("Number %d is even.", Number);

	}
	
	
	return 0;
}