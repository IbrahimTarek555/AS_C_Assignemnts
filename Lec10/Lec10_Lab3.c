#include <stdio.h>

/*Function Prototype*/
/*Function uses pointers to return the summation of two variables*/
int ReturnSum(int *Ptr1, int *Ptr2);

/*This is the main*/
int main()
{
	/*Defining variable*/
	int x, y, Sum;
	
	/*Scanning first value from user*/
	printf("Please, Enter the value of x: ");
	scanf("%d", &x);
	
	/*Scanning second value from user*/	
	printf("Please, Enter the value of y: ");
	scanf("%d", &y);
	
	/*Calling a function to return the sum of two variables*/
	Sum = ReturnSum(&x, &y);
	
	/*Printing the summation*/
	printf("Summation of x and y is %d\n", Sum);
	
	return 0;
}

/*Function Implementation*/
int ReturnSum(int *Ptr1, int *Ptr2)
{
	/*Calculating summation of two variables*/
	int Sum = *Ptr1 + *Ptr2;
	
	return Sum;
}
