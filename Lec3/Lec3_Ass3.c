#include <stdio.h>

/*This is the main*/
int main()
{
	/*Intializing variables*/
	int Num1, Num2;
	char Multipled;
	
	/*Scanning two numbers from the user*/
	printf("Enter the first number: ");
	scanf("%d", &Num1);

	printf("Enter the second number: ");
	scanf("%d", &Num2);

	
	/*Checking if the first number is multiple of the second or not*/
	Multipled = ((Num1 % Num2) == 0)? 1 : 0;
	
	/*Printing if Multipled or not*/
	(Multipled == 1)? printf("The first number is multiple of the second") : printf("The first number is not multiple of the second");
	
	return 0;
}