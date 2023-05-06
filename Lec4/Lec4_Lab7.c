#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Factorial = 1, Num;
	char i = 1;
	
	
	/*Message to the user*/
	printf("Enter an integer number: ");
	scanf("%d", &Num);

	/*Calculating the factorial of the number*/\
	do
	{
		Factorial = Factorial * i;
		i++;
	}
	while(i <= Num);
	
	/*Printing the factorial of the number*/
	printf("The factorial of the number %d is %d.", Num, Factorial);
	
	return 0;
}