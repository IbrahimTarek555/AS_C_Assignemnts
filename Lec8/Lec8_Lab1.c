#include <stdio.h>

/*Function Prototype*/
void DeleteElement(int Arr[], int Size, int Index);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], Index, i;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}
	
	/*Scanning the index that user want to delete*/
	printf("Please, Enter the deleted index: ");
	scanf("%d", &Index);
	
	/*Checking if the index is valid or not*/
	if((Index > 20) || (Index < 1))
	{
		printf("Invalid index number!\n");
	}
	else
	{
		/*Calling the function to delete the element*/
		DeleteElement(Arr, 20, Index);
		
		/*Printing the Array Elements after deletation*/
		for(i = 0; i < 19; i++)
		{
			printf("Arr[%d]: %d\n", (i + 1), Arr[i]);
		}
	}
	
	return 0;
}

/*Function Implementation*/
/*Function to delete an element on an array*/
void DeleteElement(int Arr[], int Size, int Index)
{
	/*because the user neglect that array begin with zero*/
	Index = Index - 1;

	/*Defining iterator*/
	int i;
	
	/*Passing over all Array elements after the index*/
	for(i = Index; i < (Size - 1); i++)
	{
		/*Shifting the elements to back*/
		Arr[i] = Arr[i + 1];
	}
	
}
