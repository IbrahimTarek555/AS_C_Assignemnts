#include <stdio.h>

/*Function Prototype*/
/*Function to return the last occurance of a number on an array*/
int SearchArray(int Arr[], int Size, int SearchNubmer);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[20], SearchNubmer, NumberIndex, i, ArrSize;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 20; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}
	
	/*Scanning the number that user want to search*/
	printf("Please, Enter a number to search: ");
	scanf("%d", &SearchNubmer);
	
	/*Calculating the size of array*/
	ArrSize = sizeof(Arr) / sizeof(int);

	/*Calling the function to return the last occurance of the number*/
	NumberIndex = SearchArray(Arr, ArrSize, SearchNubmer);
	
	/*printing the output to the user*/
	if(NumberIndex == -1)
	{
		/*if the number doesn't exist*/
		printf("This Number doesn't exist.\n");
	}
	else
	{
		/*else print the index of the number*/
		printf("The index of the number %d on the array is %d.\n", SearchNubmer, (NumberIndex + 1));
	}
	
	
	return 0;
}

/*Function Implementation*/
int SearchArray(int Arr[], int Size, int SearchNubmer)
{
	/*Defining variables*/
	int NumberExist = 0, i, NumberIndex;
	
	/*Searching for the number the user want to search*/
	for(i = 0; i < Size; i++)
	{
		if(Arr[i] == SearchNubmer)
		{
			NumberExist = 1;
			NumberIndex = i;
		}
	}
	
	/*Returning the Number Index*/
	if(NumberExist == 0)
	{
		return -1;
	}
	else if(NumberExist == 1)
	{
		return NumberIndex;
	}
	
}
