#include <stdio.h>

/*Function Prototype*/
/*Function to return sum of an array of integers elements*/
int Total(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array and other variables*/
	int Arr[20], ArrSum, ArrSize, i;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}

	/*Calculating the size of array*/
	ArrSize = sizeof(Arr) / sizeof(int);
	
	/*Calling a function to return sum of the array elements*/
	ArrSum = Total(Arr, ArrSize);
	
	/*Printing the sum of the array elements*/
	printf("The sum of the array elements is %d.\n", ArrSum);
	
	return 0;
}

/*Function Implementation*/
int Total(int Arr[], int ArrSize)
{
	/*Defining variables*/
	int Sum = 0, i;
	
	/*Calculating sum of array element*/
	for(i = 0; i < ArrSize; i++)
	{
		Sum = Sum + Arr[i];
	}
	
	/*Returning sum of the element*/
	return Sum;	
}
