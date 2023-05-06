#include <stdio.h>

/*Function Prototype*/
/*Function to reverse elements of an array using pointers*/
void ArrayReverse(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Arr[10] = {0}, i, ArraySize, Sum;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter number %d: ", (i + 1));
		scanf("%d", (Arr + i));
	}
	
	/*Calculating size of the array*/
	ArraySize = sizeof(Arr)/sizeof(int);
	
	/*Calling the function to reverse an array*/
	ArrayReverse(Arr, ArraySize);
		
	/*Printing array values after reversing*/
	for(i = 0; i < 10; i++)
	{
		printf("Number %d: %d\n", (i + 1), *(Arr + i));
	}
	return 0;
}
	

/*Function Implementation*/
void ArrayReverse(int Arr[], int Size)
{
	/*Defining variables*/
	int i, Temp;
	
	/*Reversing array elements*/
	for(i = 0; i < (Size / 2); i++)
	{
		Temp = *(Arr + i);
		*(Arr + i) = *(Arr + Size - i - 1);
		*(Arr + Size - i - 1) = Temp;
	}
}
