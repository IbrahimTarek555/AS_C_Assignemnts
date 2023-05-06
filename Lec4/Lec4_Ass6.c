#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, i, j;
	
	
	/*Message to the user*/
	printf("Enter the required height: ");
	scanf("%d", &Num);

	/*Loop to generate half pyramid of stars*/
	for(i = 0; i < Num; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
		
	return 0;
}
