#include <stdio.h>

/*Function Prototype*/
/*Function to Cipher a string*/
void CipherString(char Str[], char Cipher[]);

/*This is the main*/
int main()
{
	/*Defining variables*/
	char Str[20] = {0}, Cipher[4] = {0};
	
	/*Scanning string from the user*/
	printf("Enter string: ");
	scanf("%19s", Str);
	
	/*Calling the function to cipher text*/
	CipherString(Str, Cipher);
		
	/*Printing cipher of the string*/
	printf("Cipher of the string is %s", Cipher);
	
	return 0;
}
	

/*Function Implementation*/
void CipherString(char Str[], char Cipher[])
{
	/*Defining variables*/
	int NullChar = 0, LastTwo, LastOne;
	
	/*Finding the last input char*/
	while(*(Str + NullChar) != '\0')
	{
		NullChar++;
	}
	
	/*Finding index of last two inputs*/
	LastOne = NullChar - 1;
	LastTwo = NullChar - 2;

	/*Assigning last two inputs as required*/
	*(Cipher + 0) = *(Str + LastOne);
	*(Cipher + 1) = ' ';
	*(Cipher + 2) = *(Str + LastTwo);
	
}
