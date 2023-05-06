#include <stdio.h>

/*Function Prototype*/
/*Function to sort the elements of an array*/
void SelectionSort(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], ArraySize, i;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf(" %d", &Arr[i]);
	}
	
	/*Calculating array size*/
	ArraySize = sizeof(Arr)/sizeof(int);
	
	/*Calling the function to sort the elements*/
	SelectionSort(Arr, ArraySize);
		
	/*Printing the Array Elements after sorting*/
	for(i = 0; i < 20; i++)
	{
		printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
	}
	
	return 0;
}
	

/*Function Implementation*/
void SelectionSort(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, Temp, SmallestIndex;
	
	/*Passing over all Array elements*/
	for(i = 0; i < (Size - 1); i++)
	{
		/*Updating minimum index*/
		SmallestIndex = i;
		
		/*Passing over all Array elements after the element we already sort*/
		for(j = (i + 1); j < Size; j++)
		{
			/*Checking if the current element is smaller than the minimum index element*/
			if(Arr[j] < Arr[SmallestIndex])
			{
				/*Updating minimum index*/
				SmallestIndex = j;
			}
		}
		
		/*Checking if the element is already sorted*/
		if(SmallestIndex != i)
		{
			/*Swaping between minimum index and element that we sort*/
			Temp = Arr[i];
			Arr[i] = Arr[SmallestIndex];
			Arr[SmallestIndex] = Temp;
		}
	}
}
