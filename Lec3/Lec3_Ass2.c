#include <stdio.h>

/*This is the main*/
int main()
{
	/*Intializing variables*/
	char Lowercase, Uppercase;
	
	/*Scanning the Lowercase alphabet*/
	printf("Enter a Lowercase Alphabet: ");
	scanf("%c", &Lowercase);
	
	/*Validating the input as lowercase alphabet*/
	if(!((Lowercase >= 'a') && (Lowercase <= 'z')))
	{
		printf("Invalid Input!");
		return 1;
	}

	/*Converting from Lowercase to uppercase*/
	Uppercase = Lowercase - 32;
	
	/*Printing the Uppercase alphabet*/
	printf("the Uppercase Alphabet is %c", Uppercase);
	return 0;
}
