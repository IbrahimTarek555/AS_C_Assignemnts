#include <stdio.h>

/*Function Prototype*/
/*Function to reverse an array*/
void ArrayReverse(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], i, ArrSize;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}
	
	/*Calculating the size of array*/
	ArrSize = sizeof(Arr) / sizeof(int);
	
	/*Calling the function to reverse the array elements*/
	ArrayReverse(Arr, ArrSize);
	
	/*Printing the arrays elements after reversing*/
	for(i = 0; i < 20; i++)
	{
		printf("Element %d is %d.\n", (i + 1), Arr[i]);
	}
	
	return 0;
}

/*Function Implementation*/
void ArrayReverse(int Arr[], int Size)
{
	/*Defining an iterator*/
	int i;
	
	/*Reversing array elements*/
	for(i = 0; i < (Size / 2); i++)
	{
		Arr[i] = Arr[i] * Arr[Size - i - 1];
		Arr[Size - i - 1] = Arr[i] / Arr[Size - i - 1];
		Arr[i] = Arr[i] / Arr[Size - i - 1];
	}
}
