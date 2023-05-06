#include <stdio.h>

/*Function Prototype*/
int CountHoles(int Num);

/*This is the main*/
int main()
{
	/*defining variables*/
	int Num, NumberOfHoles;
	
	/*Scanning the number from the user*/
	printf("Please, enter the number: ");
	scanf("%d", &Num);
	
	/*Calling the function to calculate number of holes*/
	NumberOfHoles = CountHoles(Num);
	
	/*Printing the number of holes*/
	printf("The number %d has %d holes.", Num, NumberOfHoles);
	
	return 0;
}

/*Function Implementation*/
int CountHoles(int Num)
{
	/*Defining Function Variables*/
	int TotalHoles = 0, DigitHoles, Digit;
	
	/*Loop for the number of digits in the number*/
	while(Num != 0)
	{
		/*Get the most right digit*/
		Digit = Num % 10;
		/*Clearing the most right digit*/
		Num = Num / 10;
		
		/*Get the number of holes to the digit*/
		switch(Digit)
		{
			case 0:
			case 4:
			case 6:
			case 9:	DigitHoles = 1;
					break;
			case 8: DigitHoles = 2;
					break;
			default: DigitHoles = 0;
					 break;
		}
		
		/*Update the Total number of holes after checking every digit*/
		TotalHoles = TotalHoles + DigitHoles;
	}
	
	/*Returning total number of holes*/
	return TotalHoles;
}
