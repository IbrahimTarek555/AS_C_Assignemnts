#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Number, BitNumber, Reading;
	
	/*Scanning the number and the bit number*/
	printf("Enter the number: ");
	scanf("%d", &Number);
	
	printf("Enter the bit number: ");
	scanf("%d", &BitNumber);
	
	/*Calculating the Reading*/
	Reading = (Number >> BitNumber) & 1;
	
	/*Printing the Reading*/
	printf("The Bit %d Reading of the Number %d is %d", BitNumber, Number, Reading);
	
	return 0;
}