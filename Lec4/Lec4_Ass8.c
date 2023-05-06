#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, i, j, k, n = 0;
	
	
	/*Message to the user*/
	printf("Enter the required height: ");
	scanf("%d", &Num);

	/*Loop to generate full pyramid of stars*/
	for(i = 0; i < Num; i++)
	{
		for(j = Num; j > (i + 1); j--)
		{
			printf(" ");
		}
		
		for(k = 0; k <= (i + n); k++)
		{
			printf("*");
		}
		
		n++;
		if(i == (Num - 1))
		{
			continue;
		}
		printf("\n");
	}
		
	return 0;
}

