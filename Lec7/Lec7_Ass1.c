#include <stdio.h>

/*Application on arrays*/


/*This is the main*/
int main()
{
	/*Defining variables*/
	int i, Search, FirstIndex = -1;
	
	/*Defining Array*/
	int Arr[10];
	
	/*Scanning array values from the user*/
	for(i = 0; i < 10; i++)
	{
		printf("Please, Enter Number %d: ", (i + 1));
		scanf("%d", &Arr[i]);
	}
	
	/*Scanning array values from the user*/
	printf("Please, Enter the number you want to search: ");
	scanf("%d", &Search);

	/*Searching for the first occurance of the number*/
	for(i = 0; i < 10; i++)
	{
		if(Arr[i] == Search)
		{
			FirstIndex = i;
		}
	}
		
	/*Printing the index which evaluating*/
	if(FirstIndex == -1)
	{
		/*if not exist print -1*/
		printf("-1");
	}
	else
	{
		/*else print its index*/
		printf("The index of first occurance of %d in the array is %d", Search, FirstIndex);
	}
	
	return 0;
}
