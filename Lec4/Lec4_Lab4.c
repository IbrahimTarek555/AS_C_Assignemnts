#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining counter variable*/
	char i;
	
	/*Defining summation variable and user inpur variable*/
	int Sum = 0, Num;
	
	/*Defining Average Variable*/
	float Average;
	
	/*Message to the user*/
	printf("Enter 10 Numbers:\n");

	/*For Loop to evaluate the system*/
	for(i = 1; i <= 10; i++)
	{
		/*Scanning the Numbers from the user*/
		printf("Number - %d: ", i);
		scanf(" %d", &Num);
		
		/*Adding the Input to the Sum*/
		Sum += Num;
	}
	
	/*Calculating The Average*/
	Average = Sum / 10.0;
	
	/*Printing the Summation and the average of the 10 numbers*/
	printf("The summation of the 10 numbers is %d, And the average is %f", Sum, Average);
	
	return 0;
}