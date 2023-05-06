#include <stdio.h>

/*Function Prototype*/
/*Function to convert all uppercase letters to lowercase*/
void ConvertUpper(char Arr[], int Size);

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
	
	/*Calling the function to convert uppercase letters to lowercase*/
	ConvertUpper(Str, ArraySize);
		
	/*printing the result of the function*/
	printf("%s", Str);
	
	return 0;
}
	

/*Function Implementation*/
void ConvertUpper(char Arr[], int Size)
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
		/*If the current element is uppercase*/
		if((Arr[i] > 'A') && (Arr[i] < 'Z'))
		{
			/*Convert it to lowercase*/
			Arr[i] = Arr[i] + 32;
		}
	}
}
