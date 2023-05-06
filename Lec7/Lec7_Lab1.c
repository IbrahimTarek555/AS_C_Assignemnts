#include <stdio.h>

/*Application on arrays*/


/*This is the main*/
int main()
{
	/*Defining variables*/
	int i, Sum = 0;
	float Average;
	
	/*Defining Array*/
	int Arr[10];
	
	/*Scanning array values from the user*/
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}
	
	/*Printing array elements reversely*/
	for(i = 9; i >= 0; i--)
	{
		printf("Number %d is %d\n", (i + 1), Arr[i]);
	}
	
	/*Calculating the summation of the array elements*/
	for(i = 0; i < 10; i++)
	{
		Sum = Sum + Arr[i];
	}
	
	/*Calculating the average of the array elements*/
	Average = Sum / 10.0;
	
	/*Printing the summation and the average of the array elements*/
	printf("The summation of the array elements is %d and the average is %f", Sum, Average);
	
	return 0;
}
