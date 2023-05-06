#include <stdio.h>

/*Function Prototype*/
/*Function to swap the elements of two arrays with the same length*/
void SwapArrays(int Arr1[], int Arr2[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr1[10], Arr2[10], i, ArrSize;
	
	/*Scanning arrays values from the user*/
	printf("Please, Enter the elemets of the first array.\n");
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr1[i]);
	}
	
	printf("Please, Enter the elemets of the second array.\n");
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr2[i]);
	}

	/*Calculating the size of array*/
	ArrSize = sizeof(Arr1) / sizeof(int);
	
	
	/*Calling the function to swap the array elements*/
	SwapArrays(Arr1, Arr2, ArrSize);
	
	/*Printing the arrays elements after swaping*/
	for(i = 0; i < 10; i++)
	{
		printf("Element %d of the first array is %d.\n", (i + 1), Arr1[i]);
	}
	for(i = 0; i < 10; i++)
	{
		printf("Element %d of the second array is %d.\n", (i + 1), Arr2[i]);
	}
	
	return 0;
}

/*Function Implementation*/
void SwapArrays(int Arr1[], int Arr2[], int Size)
{
	/*Defining an iterator*/
	int i;
	
	/*Swaping two arrays elements*/
	for(i = 0; i < Size; i++)
	{
		Arr1[i] = Arr1[i] * Arr2[i];
		Arr2[i] = Arr1[i] / Arr2[i];
		Arr1[i] = Arr1[i] / Arr2[i];
	}
}
