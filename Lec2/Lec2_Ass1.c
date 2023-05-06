#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	char Character;
		
	/*Scanning the character*/
	printf("Enter the character: ");
	scanf("%c", &Character);

	/*Printing the entered character*/
	printf("You entered %c\n,", Character);
	printf("and this ASCII value is %d\n", Character);
	
	return 0;
}