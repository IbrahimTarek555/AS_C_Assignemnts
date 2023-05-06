#include <stdio.h>

/*Function Prototype*/
/*Function to find the length of a string*/
int Arraylength(char Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	char Str[20] = {0};
	int ArraySize, ArrayLength;
	
	/*Scanning string from the user*/
	printf("Please, Enter string : ");
	scanf("%19s", &Str);
	
	/*Calculating array size*/
	ArraySize = sizeof(Str)/sizeof(char);
	
	/*Calling the function to return the length of a string*/
	ArrayLength = Arraylength(Str, ArraySize);
		
	/*printing the result of the function*/
	printf("The length of the string you inputed is %d", ArrayLength);
	
	return 0;
}
	

/*Function Implementation*/
int Arraylength(char Arr[], int Size)
{
	/*Defining variables*/
	int Length = 0;
	
	/*Searching for the end of the string inputed from the user*/
	while(Arr[Length] != '\0')
	{
		/*Increment the length until reaching the end of the string*/
		Length++;
	}
	
	return Length;
}
