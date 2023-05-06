#include <stdio.h>

/*This is the main*/
int main()
{
	/*Intializing variables*/
	char Input, CheckAlpha;
	
	/*Scanning the input from the user*/
	printf("Enter a single input: ");
	scanf("%c", &Input);
	
	/*Determining if alphapet or not*/
	CheckAlpha = ((Input >= 'A') && (Input <= 'Z'))?  1 : 0;
	CheckAlpha = ((Input >= 'a') && (Input <= 'z'))? 1 : CheckAlpha;
	
	/*Printing if Alpha or not*/
	(CheckAlpha == 1)? printf("This input is an Alphabetic Member") : printf("This input is not an Alphabetic Member");
	
	return 0;
}