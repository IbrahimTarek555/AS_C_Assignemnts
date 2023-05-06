#include <stdio.h>

/*Function Prototype*/
/*Function to get smallest element on an array*/
void FindSmallest(int Arr[], int Size, int *Min);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Arr[10] = {0}, Min, i, ArraySize;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}
	
	/*Calculating number of array elements*/
	ArraySize = sizeof(Arr) / sizeof(int);
	
	/*Calling the function to get Min*/
	FindSmallest(Arr, ArraySize, &Min);
		
	/*Printing result of the function*/
	printf("Smallest value on the array is %d\n", Min);
	
	return 0;
}
	

/*Function Implementation*/
void FindSmallest(int Arr[], int Size, int *MinPtr)
{
	/*Defining variables*/
	int i, Min = *Arr;

	/*Searching over the elements*/
	for(i = 0; i < Size; i++)
	{
		
		/*Get the smallest element*/
		if((*(Arr + i)) < Min)
		{
			Min = *(Arr + i);
		}
	}
	
	/*Assigning lowest to the main*/
	*MinPtr = Min;
}
