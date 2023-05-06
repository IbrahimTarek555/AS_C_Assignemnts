#include <stdio.h>

/*This is the main*/
int main()
{
	/*Intializing variables*/
	int Temperature, RequiredHeatingTime;
	
	/*Scanning the Temperature from the user*/
	printf("Please enter the temperature: ");
	scanf(" %d", &Temperature);

	/*Validating the input*/
	if((Temperature > 100) || (Temperature < 0))
	{
		printf("Invalid Input!");
	}
	/*Calculating the Reuired Heater Activation Time*/
	else if(Temperature >= 90)
	{
		printf("Heat for 1 minute.");
	}
	else if(Temperature >= 60)
	{
		printf("Heat for 3 minute.");
	}
	else if(Temperature >= 30)
	{
		printf("Heat for 5 minute.");
	}
	else if(Temperature >= 0)
	{
		printf("Heat for 7 minute.");
	}

	
	
	return 0;
}