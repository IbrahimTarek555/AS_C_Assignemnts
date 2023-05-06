#include <stdio.h>

/*Function Prototype*/
/*Function to find the length of a string using pointer*/
void FindArraylength(char Arr[], int* LengthPtr);

/*This is the main*/
int main()
{
	/*Defining variables*/
	char Str[20] = {0};
	int ArrayLength;
	
	/*Scanning string from the user*/
	printf("Please, Enter string : ");
	scanf("%19s", &Str);
	
	/*Calling the function to return the length of a string*/
	FindArraylength(Str, &ArrayLength);
		
	/*printing the result of the function*/
	printf("The length of the string you inputed is %d", ArrayLength);
	
	return 0;
}
	

/*Function Implementation*/
void FindArraylength(char Arr[], int* LengthPtr)
{
	/*Defining variables*/
	int Length = 0;
	
	/*Searching for the end of the string inputed from the user*/
	while(Arr[Length] != '\0')
	{
		/*Increment the length until reaching the end of the string*/
		Length++;
	}
	
	*LengthPtr = Length;
}
