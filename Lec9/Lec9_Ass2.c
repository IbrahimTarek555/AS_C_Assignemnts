#include <stdio.h>

/*Function Prototype*/
/*
 * Function to sort the elements of an array,
 * This function follows: bubble sort with descending order.
 */
void BubbleSort(int Arr[], int Size);

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
	BubbleSort(Arr, ArraySize);
		
	/*Printing the Array Elements after sorting*/
	for(i = 0; i < 20; i++)
	{
		printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
	}
	
	return 0;
}
	

/*Function Implementation*/
void BubbleSort(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, Temp, SortingDone;
	
	/*Passing over all Array elements*/
	for(i = (Size - 1); i > 0; i--)
	{
		/*Setting a flag to inform that the elements are already sorted or not*/
		SortingDone = 1;
		
		/*Passing over all Array elements after the element we already sort*/
		for(j = 0; j < i; j++)
		{
			/*Swapping if the first element is bigger than the second one*/
			if(Arr[j] > Arr[j + 1])
			{
				Temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = Temp;
				
				/*If there are swaps clear the flag, otherwise keep it up*/
				SortingDone = 0;
			}
		}
		
		if(SortingDone == 1)
		{
			break;
		}
	}
}