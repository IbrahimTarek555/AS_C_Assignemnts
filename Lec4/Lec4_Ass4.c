#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, Power, Result = 1, i;
	
	/*Message to the user*/
	printf("Enter an integer number: ");
	scanf("%d", &Num);
	printf("Enter the power: ");
	scanf("%d", &Power);

	/*Calculating the power of the number*/
	for(i = 0; i < Power; i++)
	{
		Result = Result * Num;
	}

	/*Printing the the power of the number*/
	printf("The power %d of the number %d is %d.",Power, Num, Result);
	
	return 0;
}