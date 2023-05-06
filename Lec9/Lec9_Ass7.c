#include <stdio.h>

/*Function Prototype*/
/*Function to Remove all characters except alphabets*/
void ReverseString(char Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	char Str[20] = {0};
	int ArraySize;
	
	/*Scanning string from the user*/
	printf("Please, Enter string: ");
	scanf("%19s", &Str);
	
	/*Calculating array size*/
	ArraySize = sizeof(Str)/sizeof(char);
	
	/*Calling the function to remove all characters except alphabets*/
	ReverseString(Str, ArraySize);
		
	/*printing the result of the function*/
	printf("%s", Str);
	
	return 0;
}
	

/*Function Implementation*/
void ReverseString(char Arr[], int Size)
{
	/*Defining variables*/
	int i, j = 0;
	char Temp;
	
	/*Searching for the end of the string inputed from the user*/
	while(Arr[j] != '\0')
	{
		j++;
	}
		
	/*Passing over all characters on the array, neglecting the null elements*/
	/*Reversing array elements*/
	for(i = 0; i < (j / 2); i++)
	{
		Temp = Arr[i];
		Arr[i] = Arr[j - i - 1];
		Arr[j - i - 1] = Temp;
	}
}


