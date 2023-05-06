#include <stdio.h>

/*Function Prototype*/
/*Function to check if there is repeated elements in an array of charachters or not*/
int CheckRepeated(char Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	char Str[20] = {0};
	int ArraySize, Check;
	
	/*Scanning string from the user*/
	printf("Please, Enter string: ");
	scanf("%19s", &Str);
	
	/*Calculating array size*/
	ArraySize = sizeof(Str)/sizeof(char);
	
	/*Calling the function to check if there is reapeted elements or not*/
	Check = CheckRepeated(Str, ArraySize);
		
	/*Check the result of the function then Printing it*/
	if(Check == 0)
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
	
	return 0;
}
	

/*Function Implementation*/
int CheckRepeated(char Arr[], int Size)
{
	/*Defining variables*/
	int i, j, k = 0, RepeatedState = 1;
	
	/*Searching for the end of the string inputed from the user*/
	while(Arr[k] != '\0')
	{
		k++;
	}
		
	/*Passing over all Array elements*/
	for(i = 0; i < (k - 1); i++)
	{
		/*Passing over all Array elements after the element we already searched*/
		for(j = (i + 1); j < k; j++)
		{
			/*Checking if the current element is Repeated or not*/
			if(Arr[j] == Arr[i])
			{
				/*Update the state to be repeated (0)*/
				RepeatedState = 0;
				
				/*Then go out from the function*/
				return RepeatedState;
			}
		}
	}
	
	/*If the function reachs this point, it means that is no repeated elements*/
	return RepeatedState;
}
