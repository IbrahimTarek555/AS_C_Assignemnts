#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, i, j = 0;
	
	
	/*Message to the user*/
	printf("Enter a positive number: ");
	scanf("%d", &Num);

	/*Checking if the number is a perfect square or not*/
	for(i = 1; i <= Num; i++)
	{
		j = (((Num / i) == i) && ((Num % i) == 0))? 1 : 0;
		if(j == 1) 
		{
			break;	
		}
	}
	
	/*Printing if the number is a perfect square or not*/
	switch(j)
	{
		case 1: printf("The Number %d is a perfect square.", Num);
		break;
		case 0: printf("The Number %d is not a perfect square.", Num);
		break;
	}

	return 0;
}