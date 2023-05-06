#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Number;
	char OnesValue, TensValue, HundredsValue;
		
	/*Scanning Values*/
	printf("Enter a three digit number: ");
	scanf("%d", &Number);

	/*Way 1 for separating every individual digit in a variable*/
	HundredsValue = Number / 100;
	TensValue = (Number - HundredsValue * 100) / 10;
	OnesValue = (Number - HundredsValue * 100 - TensValue * 10);
	
	/*Way 2 for separating every individual digit in a variable*/
	OnesValue = (Number % 100) % 10;
	TensValue = ((Number % 100) - OnesValue) / 10;
	HundredsValue = (Number - TensValue - OnesValue) / 100;
	
	/*Way 3 for separating every individual digit in a variable but with a negative effect on the number*/
	OnesValue = Number % 10;
	Number = Number / 10;
	TensValue = Number % 10;
	Number = Number / 10;
	HundredsValue = Number % 10;
	
	
	/*Printing Separated Number*/
	printf("%d\t%d\t%d\n", HundredsValue, TensValue, OnesValue);
	
	return 0;
}