#include <stdio.h>

/*Application on recursion*/

/*Function Prototype*/
int Factorial(int Num);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, NumFactorial;
	
	/*Scanning the number from the user*/
	printf("Please, Enter the number: ");
	scanf("%d", &Num);
	
	/*Calling the function to get the factorial of the number*/
	NumFactorial = Factorial(Num);
	
	/*Printing the factorial of the number*/
	printf("The Factorial of %d is %d.", Num, NumFactorial);
	
	return 0;
}

/*Function Implementation*/
/*Function to return the factorial of a number*/
int Factorial(int Num)
{
	if((Num == 1) || (Num == 0))
	{
		return 1;
	}
	else
	{
		return (Num * Factorial(Num -1));
	}
}
