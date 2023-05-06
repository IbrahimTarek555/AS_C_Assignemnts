#include <stdio.h>

/*This is the main*/
int main()
{
	/*Intializing variables*/
	float Num1, Num2;
	int Sum;
	/*Scanning the values of floating numbers from the user*/
	printf("Enter the first float number: ");
	scanf("%f", &Num1);
	
	printf("Enter the second float number: ");
	scanf("%f", &Num2);

	/*Calculating the integer sum of the two numbers*/
	Sum = Num1 + Num2;
	
	/*Printing Sum*/
	printf("The Integer Sum is %d", Sum);	
	return 0;
}