#include <stdio.h>

/*Function Prototype*/
int MaxNum(int A, int B);

/*This is the main*/
int main()
{
	/*Intializing variables*/
	int Num1, Num2, Max;
	
	/*Scanning 2 numbers from the user*/
	printf("Please, Enter the first number: ");
	scanf("%d", &Num1);
	
	printf("Please, Enter the second number: ");
	scanf("%d", &Num2);
	
	/*Calling the function to return the maximum number*/
	Max = MaxNum(Num1, Num2);
	
	/*Printing the maximum number*/
	printf("The maximum is %d.", Max);
	
	return 0;
}

/*Function Implementation*/
/*Function to find the maximum from two numbers*/
int MaxNum(int A, int B)
{
	int Maximum;
	if(A > B)
	{
		Maximum = A;
	}
	else
	{
		Maximum = B;
	}

	return Maximum;
}
