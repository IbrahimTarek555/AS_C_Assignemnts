#include <stdio.h>


/*Function Prototype*/
/*Function to swap two numbers using bitwise operation*/
void BitwiseSwap(int *Num1, int *Num2);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num1, Num2;
	
	/*Scanning vlues from the user*/
	printf("Please enter the value of Num1: ");
	scanf("%d", &Num1);
	printf("Please enter the value of Num2: ");
	scanf("%d", &Num2);

	
	/*Calling a function to swap numbers*/
	BitwiseSwap(&Num1, &Num2);
	
	/*Printing values to the user*/
	printf("Value of Num1 is: %d\n", Num1);
	printf("Value of Num2 is: %d\n", Num2);

	return 0;
}
	

/*Function Implementation*/
void BitwiseSwap(int *Num1, int *Num2)
{
	/*Swapping numbers*/
	*Num1 = *Num1 ^ *Num2;
	*Num2 = *Num1 ^ *Num2;
	*Num1 = *Num1 ^ *Num2;
}