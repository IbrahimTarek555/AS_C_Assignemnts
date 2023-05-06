#include <stdio.h>

/*Function Prototype*/
/*Function to concatenate two strings*/
void ConcatenateStrings(char Arr[], char Arr1[], char Arr2[]);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	char Str1[40] = {0}, Str2[20] = {0}, Str3[20] = {0};
	
	/*Scanning two strings from the user*/
	printf("Please, Enter the first string: ");
	scanf("%19s", &Str2);
	
	printf("Please, Enter the second string: ");
	scanf("%19s", &Str3);
	
	/*Calling the function to concatenate two strings into the third one*/
	ConcatenateStrings(Str1, Str2, Str3);
		
	/*printing the result of the function*/
	printf("%s", Str1);
	
	return 0;
}
	

/*Function Implementation*/
void ConcatenateStrings(char Arr[], char Arr1[], char Arr2[])
{
	/*Defining variables*/
	int Length1 = 0, Length2 = 0, i, j;
	
	/*Searching for the end of the first string inputed from the user*/
	while(Arr1[Length1] != '\0')
	{
		/*It the Length of the first array*/
		Length1++;
	}

	/*Searching for the end of the second string inputed from the user*/
	while(Arr2[Length2] != '\0')
	{
		/*It the Length of the second array*/
		Length2++;
	}

	/*Copying elements of two strings into the third*/
	for(i = 0; i < Length1; i++)
	{
		Arr[i] = Arr1[i];
	}
	
	for(j = 0; j < Length2; j++)
	{
		Arr[j + i - 1] = Arr2[j];
	}

}


