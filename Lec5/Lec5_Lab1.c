#include <stdio.h>

/*Function Prototype*/
int Add(int Num1, int Num2);

/*This is the main*/
int main()
{
	/*Intializing variables*/
	int A = 10, B = 20, Sum;
	
	/*Calling the function to add two numbers*/
	Sum = Add(A, B);
	
	printf("The summation is %d.", Sum);
	
	return 0;
}

/*Function Implementation*/
int Add(int Num1, int Num2)
{
	int Result;
	Result = Num1 + Num2;
	return Result;
}
