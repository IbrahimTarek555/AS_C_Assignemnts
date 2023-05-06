#include <stdio.h>
#include <stdlib.h>

/*Function Prototype*/
/*
* Function to sort the elements of an array,
* This function follows: Bubble sort with Ascending order.
*/
void Bubblesort(int Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int i, ArraySize = 20;
	
	/*Resrving an Location for array with 20 elements*/
	int *Arr = (int *) malloc(20 * sizeof(int));
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}
	
	/*Calling the function to sort the elements*/
	Bubblesort(Arr, ArraySize);
		
	/*Printing the Array Elements after sorting*/
	for(i = 0; i < 20; i++)
	{
		printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
	}
	
	return 0;
}
	

/*Function Implementation*/
void Bubblesort(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, Swapped, Temp;
	
	/*Passing over all Array elements*/
	for(i = 0; i < (Size - 1); i++)
	{
		/*Raising swapped flag to know if there is element isn't sorted yet*/
		Swapped = 1;
		
		/*Passing over the elements from the beginning to the end of unsorted part*/
		for(j = 0; j < (Size - 1 - i); j++)
		{
			/*
			 * If the element is bigger than the previous element, swap them.
			 */
			if(Arr[j] > Arr[j + 1])
			{
				Temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = Temp;
				
				/*Lowering the flag of swapped*/
				Swapped = 0;
			}
		}
		
		if(Swapped == 1)
		{
			/*going out from the loop because there are not unsorted elements*/
			break;
		}
	}
}