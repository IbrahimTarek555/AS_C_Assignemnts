#include <stdio.h>

/*Finding Maximum between 3 integer inputs*/

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Num1, Num2, Num3, MaxNum;
	
	/*Scanning 3 numbers from the user*/
	printf("Enter first number: ");
	scanf(" %d", &Num1);
	
	printf("Enter second number: ");
	scanf(" %d", &Num2);
	
	printf("Enter third number: ");
	scanf(" %d", &Num3);
	
	/*Evaluating the maximum number*/
	MaxNum = (Num1 > Num2)? Num1 : Num2;
	MaxNum = (MaxNum > Num3)? MaxNum : Num3;
	
	/*Printing the maximum number*/
	printf("The meximum number between your inputs is %d", MaxNum);
	
	return 0;
}