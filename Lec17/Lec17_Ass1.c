#include <stdio.h>

/*Function Prototype*/
/*
* Function to sort the elements of an array,
* This function follows: insortion sort with descending order.
*/
void InsertionSortDescending(int Arr[], int Size);

/*Function Prototype*/
/*
* Function to sort the elements of an array,
* This function follows: insortion sort with ascending order.
*/
void InsertionSortAscending(int Arr[], int Size);


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
	
	/*Calling the function to sort the elements with ascending order*/
	InsertionSortAscending(Arr, ArraySize);
		
	/*Printing the Array Elements after sorting*/
	for(i = 0; i < 20; i++)
	{
		printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
	}
	
	/*Calling the function to sort the elements with descending order*/
	InsertionSortDescending(Arr, ArraySize);
		
	/*Printing the Array Elements after sorting*/
	for(i = 0; i < 20; i++)
	{
		printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
	}

	
	return 0;
}
	

/*Function Implementation*/
void InsertionSortDescending(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, k, Temp;
	
	/*Passing over all Array elements*/
	for(i = 1; i < Size; i++)
	{
		/*Passing over the elements from the beginning to the element we sort*/
		for(j = 0; j < i; j++)
		{
			/*
			 * sice we reached the right location of the element,
			 * shift the elements to the right,
			 * then break the loop because we already sort this element.
			 */
			if(Arr[i] < Arr[j])
			{
				Temp = Arr[i];
				
				/*Shifting elements to the right from the location of the element we sort til its location before sorting*/
				for(k = i; k > j; k--)
				{
					Arr[k] = Arr[k - 1];
				}
				
				/*Locating the element we sort in its sorted location*/
				Arr[j] = Temp;
				
				/*going out from the loop because we already sort this element*/
				break;
			}
		}
	}
}

void InsertionSortAscending(int Arr[], int Size)
{
	/*Defining variables*/
	int i, j, k, Temp;
	
	/*Passing over all Array elements*/
	for(i = 1; i < Size; i++)
	{
		/*Passing over the elements from the beginning to the element we sort*/
		for(j = 0; j < i; j++)
		{
			/*
			 * sice we reached the right location of the element,
			 * shift the elements to the right,
			 * then break the loop because we already sort this element.
			 */
			if(Arr[i] > Arr[j])
			{
				Temp = Arr[i];
				
				/*Shifting elements to the right from the location of the element we sort til its location before sorting*/
				for(k = i; k > j; k--)
				{
					Arr[k] = Arr[k - 1];
				}
				
				/*Locating the element we sort in its sorted location*/
				Arr[j] = Temp;
				
				/*going out from the loop because we already sort this element*/
				break;
			}
		}
	}
}