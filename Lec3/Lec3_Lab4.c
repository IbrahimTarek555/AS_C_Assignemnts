#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Grade, Rating;
	
	/*Scanning the Grade from the user*/
	printf("Please enter your grade: ");
	scanf(" %d", &Grade);

	/*Validating the input*/
	if((Grade < 0) || (Grade > 100))
	{
		printf("Invalid Input!");
		return 1;
	}

	/*Calculating the rating of the user*/
	if(Grade >= 85)
	{
		printf("Your Rating is excellent.");
	}
	else if(Grade >= 75)
	{
		printf("Your Rating is very good.");
	}
	else if(Grade >= 65)
	{
		printf("Your Rating is good.");
	}
	else if(Grade >= 50)
	{
		printf("Your Rating is Pass.");
	}
	else
	{
		printf("Your Rating is fail.");
	}

	
	
	return 0;
}