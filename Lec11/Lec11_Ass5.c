#include <stdio.h>

/*Function Prototype*/
/*Function to copy an array into another array*/
void CopyArray(int Arr1[], int Arr2[], int Size);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Arr1[10] = {0}, Arr2[10] = {0}, i, ArraySize;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter number %d: ", (i + 1));
		scanf("%d", (Arr1 + i));
	}
	
	/*Calculating number of array elements*/
	ArraySize = sizeof(Arr1) / sizeof(int);
	
	/*Calling the function to copy array*/
	CopyArray(Arr1, Arr2, ArraySize);
		
	/*Printing elements of the two arrays*/
	for(i = 0; i < 10; i++)
	{
		printf("Number %d is: %d\n", (i + 1), *(Arr1 + i));
	}

	for(i = 0; i < 10; i++)
	{
		printf("Number %d is: %d\n", (i + 1), *(Arr2 + i));
	}

	return 0;
}
	

/*Function Implementation*/
void CopyArray(int Arr1[], int Arr2[], int Size)
{
	/*Defining iterator*/
	int i;

	/*Passing over the elements*/
	for(i = 0; i < Size; i++)
	{
		/*Copying elements*/
		*(Arr2 + i) = *(Arr1 + i);
	}	
}
