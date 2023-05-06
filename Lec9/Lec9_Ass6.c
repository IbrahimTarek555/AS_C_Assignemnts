#include <stdio.h>

/*Function Prototype*/
/*Function to Remove all characters except alphabets*/
void FilterCharacters(char Arr[], int Size);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	char Str[20] = {0};
	int ArraySize;
	
	/*Scanning string from the user*/
	printf("Please, Enter string : ");
	scanf("%19s", &Str);
	
	/*Calculating array size*/
	ArraySize = sizeof(Str)/sizeof(char);
	
	/*Calling the function to remove all characters except alphabets*/
	FilterCharacters(Str, ArraySize);
		
	/*printing the result of the function*/
	printf("%s", Str);
	
	return 0;
}
	

/*Function Implementation*/
void FilterCharacters(char Arr[], int Size)
{
	/*Defining variables*/
	int i, j = 0;
	
	/*Searching for the end of the string inputed from the user*/
	while(Arr[j] != '\0')
	{
		j++;
	}
		
	/*Passing over all Array elements*/
	for(i = 0; i < j; i++)
	{
		/*If the current element is not in the range of alphabets*/
		if(!(((Arr[i] > 'A') && (Arr[i] < 'Z')) || ((Arr[i] > 'a') && (Arr[i] < 'z'))))
		{
			/*remove this letter*/
			Arr[i] = 32;
		}
	}
}
