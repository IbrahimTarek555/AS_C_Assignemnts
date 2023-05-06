#include <stdio.h>

/*This is the main function*/
int main()
{
	/*Declaring the variables*/
	int x, y;
	int result;
	
	/*Scanning the values*/
	printf("Enter the first value: ");
	scanf("%d", &x);
	
	printf("Enter the second value: ");
	scanf("%d", &y);
	
	/*Calculating the result*/
	result = ((x + y) * 3) - 10;
	
	/*Printing the result*/
	printf("The result is: %d", result);
	
	return 0;
}


