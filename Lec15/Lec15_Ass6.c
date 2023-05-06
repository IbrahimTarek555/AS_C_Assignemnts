#include <stdio.h>

/*New enum type definition*/
typedef enum
{
	Level1 = 1, Level2, Level3
}Fan_Level;

/*This is the main*/
int main()
{
	/*Defining a Fan_Level variable*/
	Fan_Level Var;
	int Temp;
	
	/*Scanning the fan level from the user into Temporary int variable*/
	printf("Please enter fan level (choices are 1, 2, 3): ");
	scanf("%d", &Temp);
	
	/*Validating the input*/
	if((Temp > 3) || (Temp < 1))
	{
		printf("Invalid Input!");
		return 1;
	}
	
	/*Casting from temp to enum Fan_Level*/
	Var = (char) Temp;
	
	/*Printing fan level*/
	switch(Var)
	{
		case Level1: printf("Fan Level is Level1");
		break;
		case Level2: printf("Fan Level is Level2");
		break;
		case Level3: printf("Fan Level is Level3");
		break;
		
	}
	
	/*Retutning to the operating system*/
	return 0;
}