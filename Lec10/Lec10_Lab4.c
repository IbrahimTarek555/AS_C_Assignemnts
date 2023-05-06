#include <stdio.h>

/*Function Prototype*/
/*Function uses pointers to return the summation and subtraction of two variables*/
void ReturnSumAndSub(int *Ptr1, int *Ptr2, int *SumPtr, int *SubPtr);

/*This is the main*/
int main()
{
	/*Defining variable*/
	int x, y, Sum, Sub;
	
	/*Scanning first value from user*/
	printf("Please, Enter the value of x: ");
	scanf("%d", &x);
	
	/*Scanning second value from user*/	
	printf("Please, Enter the value of y: ");
	scanf("%d", &y);
	
	/*Calling a function to return the sum of two variables*/
	ReturnSumAndSub(&x, &y, &Sum, &Sub);
	
	/*Printing the summation*/
	printf("Summation of x and y is %d\n", Sum);
	
	/*Printing the subtraction*/
	printf("Subtraction of x and y is %d\n", Sub);

	return 0;
}

/*Function Implementation*/
void ReturnSumAndSub(int *Ptr1, int *Ptr2, int *SumPtr, int *SubPtr)
{
	/*Calculating summation and return it to the variable*/
	*SumPtr = *Ptr1 + *Ptr2;
	
	/*Calculating subtraction and return it to the variable*/
	*SubPtr = *Ptr1 - *Ptr2;
}
