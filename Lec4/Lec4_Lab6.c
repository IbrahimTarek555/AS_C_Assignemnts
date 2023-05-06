#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, Result;
	char i = 0;
	
	
	/*Message to the user*/
	printf("Enter a number to display its multiplication table: ");
	scanf("%d", &Num);

	/*Printing the multiplication table*/
	for(i = 1; i <= Num; i++)
	{
		Result = i * Num;
		printf("%d * %d = %d\n", i, Num, Result);
	}
	
	
	return 0;
}