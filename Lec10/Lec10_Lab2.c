#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variable*/
	int x, xNew;
	
	/*defining pointer to integer to carry the location of x*/
	int* xPtr = &x;

	/*Scanning first value from user*/
	printf("Please, Enter the value of x: ");
	scanf("%d", &x);
	
	/*Printing the first value*/
	printf("value of x before change is: %d\n", x);

	/*Scanning second value from user*/	
	printf("Enter the new value of x: ");
	scanf("%d", &xNew);
	
	/*Assigning the second value by dereferencing operator*/
	*xPtr = xNew;
	
	/*Printing the second value of x*/
	printf("value of x after change is: %d\n", x);
	
	return 0;
}