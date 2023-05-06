#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, i, j, k, n, m;
	
	
	/*Message to the user*/
	printf("Enter the required height: ");
	scanf("%d", &Num);
	
	/*Intializing for loop variables*/
	n = Num * 2 - 2;
	m = 0;

	/*Loop to generate full pyramid of stars*/
	for(i = 0; i < Num; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf(" ");
		}

		printf("*");
		
		for(k = 0; k < n; k++)
		{
			printf(" ");
		}
		
		printf("*");
		
		n -= 2;
		
		printf("\n");
	}
	
	for(i = 0; i < Num; i++)
	{
		for(j = Num; j > (i + 1); j--)
		{
			printf(" ");
		}

		printf("*");
		
		for(k = 0; k < m; k++)
		{
			printf(" ");
		}
		
		printf("*");
		
		n -= 2;
		m += 2;
		
		printf("\n");
	}

	
		
	return 0;
}

