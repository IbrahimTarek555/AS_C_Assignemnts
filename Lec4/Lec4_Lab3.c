#include <stdio.h>

/*This is the main*/
int main()
{
	/*Initializing counter variable*/
	char i; 
	
	/*Printing my name 10 times*/
	for(i = 0; i < 10; i++)
	{
		printf("Ibrahim\n");
	}
	
	/*Telling the user that the system will print numbers from 1 to 10*/
	printf("The first ten natural numbers are:\n");
	
	/*Pirnting the first ten natural numbers*/
	for(i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	
	return 0;
}