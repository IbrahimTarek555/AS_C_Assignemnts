#include <stdio.h>

/*Function Prototype*/
int Calc(int Num1, char Operation, int Num2);

/*Defining a glabal variable to check correction of the operation*/
int Check = 0;

/*This is the main*/
int main()
{
	/*defining variables*/
	int Num1, Num2, Result;
	char Operation;
	
	/*Scanning the required claculation from the user*/
	printf("Please, Enter your calculation as follows A * B then press enter: ");
	scanf("%d %c %d", &Num1, &Operation, &Num2);

	/*Calling the function that does the calculation*/
	Result = Calc(Num1, Operation, Num2);
	
	/*Checking if any error occured*/
	if(Check == 1)
	{
		printf("%c is not an operation.", Operation);
		return 1;
	}

	/*Printing the result of the calculation*/
	printf("%d %c %d = %d", Num1, Operation, Num2, Result);
	
	return 0;
}

/*Function Implementation*/
/*MINI Calculator*/
int Calc(int Num1, char Operation, int Num2)
{
	int Result = 1;
	
	/*Validating the operation*/
	if(!((Operation == '+') || (Operation == '-') || (Operation == '/') || (Operation == '*')))
	{
		Check = 1;
	}
	
	switch(Operation)
	{
		case '+': Result = Num1 + Num2;
		break;
		case '-': Result = Num1 - Num2;
		break;
		case '/': Result = Num1 / Num2;
		break;
		case '*': Result = Num1 * Num2;
		break;
	}
	
	return Result;
}
