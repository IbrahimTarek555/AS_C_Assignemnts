#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Number, BitNumber, SetResult, ClearResult, ToggleResult;
	char Character;
	
	/*Scanning the number and the bit number*/
	printf("Enter the number: ");
	scanf("%d", &Number);
	
	printf("Enter the bit number: ");
	scanf("%d", &BitNumber);
	
	/*Calculating the Requirements*/
	SetResult = Number | (1 << BitNumber);
	ClearResult = Number & (~(1 << BitNumber));
	ToggleResult = Number ^ (1 << BitNumber);
	
	/*Printing Results*/
	printf("Setting Bit Result is %d\n", SetResult);
	printf("Clearing Bit Result is %d\n", ClearResult);
	printf("Toggling Bit Result is %d\n", ToggleResult);
	
	/*Scanning the character*/
	printf("Enter the character: ");
	scanf("%c", &Character);

	/*Printing the entered character*/
	printf("You entered %c\n,", Character);
	printf("and this ASCII value is %d\n", Character);
	
	return 0;
}