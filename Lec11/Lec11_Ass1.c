#include <stdio.h>

/*Function Prototype*/
/*Function to calculate sum of the array elements using pointers*/
void ArraySum(int Arr[], int Size, int *Sum);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Arr[20] = {0}, i, ArraySize, Sum;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter number %d: ", (i + 1));
		scanf("%d", (Arr + i));
	}
	
	/*Calculating size of the array*/
	ArraySize = sizeof(Arr)/sizeof(int);
	
	/*Calling the function to get sum*/
	ArraySum(Arr, ArraySize, &Sum);
		
	/*Printing result of the function*/
	printf("Summation of the Array elements is %d", Sum);
	
	return 0;
}
	

/*Function Implementation*/
void ArraySum(int Arr[], int Size, int *SumPtr)
{
	/*Defining variables*/
	int i, Sum = 0;

	/*Passing over the elements*/
	for(i = 0; i < Size; i++)
	{
		/*updating summation*/
		Sum = Sum + (*(Arr + i));
	}
	
	/*Assigning Summation to the main*/
	*SumPtr = Sum;
}
