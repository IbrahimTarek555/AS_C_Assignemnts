#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Number, BitNumber, BitNumberValue;
		
	/*Scanning Values*/
	printf("Enter the number: ");
	scanf("%d", &Number);
	printf("Enter the bit number: "); 
	scanf("%d", &BitNumber);

	/*Calculating the required bit value*/
	BitNumberValue = (Number >> BitNumber) & 1;
	
	/*Printing the required bit value*/
	printf("The value of bit %d in the number %d is %d\n", BitNumber, Number, BitNumberValue);
	
	return 0;
}