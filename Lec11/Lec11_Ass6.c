#include <stdio.h>

/*Function Prototype*/
/*Function to swap contents of two arrays*/
void SwapArrays(int Arr1[], int Arr2[], int Size);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Arr1[10] = {0}, Arr2[10] = {0}, i, ArraySize;
	
	/*Scanning the first array values from the user*/
	printf("Please, Enter the first array elements.\n");
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter number %d: ", (i + 1));
		scanf("%d", (Arr1 + i));
	}
	
	/*Scanning the second array values from the user*/
	printf("Please, Enter the second array elements.\n");
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter number %d: ", (i + 1));
		scanf("%d", (Arr2 + i));
	}

	/*Calculating number of array elements*/
	ArraySize = sizeof(Arr1) / sizeof(int);
	
	/*Calling the function to swap elements*/
	SwapArrays(Arr1, Arr2, ArraySize);
		
	/*Printing elements of the two arrays*/
	printf("Elements of the first array:\n");
	for(i = 0; i < 10; i++)
	{
		printf("Number %d is: %d\n", (i + 1), *(Arr1 + i));
	}
	
	printf("Elements of the second array:\n");
	for(i = 0; i < 10; i++)
	{
		printf("Number %d is: %d\n", (i + 1), *(Arr2 + i));
	}

	return 0;
}
	

/*Function Implementation*/
void SwapArrays(int Arr1[], int Arr2[], int Size)
{
	/*Defining variables*/
	int i, Temp;

	/*Passing over the elements and swap them*/
	for(i = 0; i < Size; i++)
	{
		/*Swapping elements*/
		Temp = *(Arr1 + i);
		*(Arr1 + i) = *(Arr2 + i);
		*(Arr2 + i) = Temp;
	}	
}
