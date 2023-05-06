#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Num, i, Number;
	
	/*Scanning a number from the user*/
	printf("Please, enter a number: ");
	scanf("%d", &Num);
	
	/*Looping over Number bits and print each bit*/
	for(i = 31; i >= 0; i--)
	{
		printf("%d", ((Num >> i) & 1));
	}

	return 0;
}
	

