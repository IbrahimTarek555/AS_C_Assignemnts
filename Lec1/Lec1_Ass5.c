#include <stdio.h>

/*This is the main function*/
int main()
{
	/*Declaring the variables*/
	int x, y;
	int Sum, Sub, And, Or, Xor;
	
	/*Scanning the values*/
	printf("Enter the first number: ");
	scanf("%d", &x);
	
	printf("Enter the second number: ");
	scanf("%d", &y);
	
	/*Calculating the required values*/
	Sum = x + y;
	Sub = x - y;
	And = x & y;
	Or = x | y;
	Xor = x ^ y;
	
	/*Printing the required values*/
	printf("The summation result is: %d\n", Sum);
	printf("The substraction result is: %d\n", Sub);
	printf("The andding result is: %d\n", And);
	printf("The oring result is: %d\n", Or);
	printf("The xoring result is: %d\n", Xor);

	return 0;
}
