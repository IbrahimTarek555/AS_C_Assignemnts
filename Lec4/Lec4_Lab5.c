#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num = 0;
	
	
	/*Message to the user*/
	printf("Enter the answer of 3 * 4 = ");
	scanf(" %d", &Num);

	/*For Loop to evaluate the system*/
	while(Num != 12)
	{
		/*Scanning the answer from user*/
		printf("Not Corrct. Please try again: ");
		scanf(" %d", &Num);
	}
	
	/*Say Thank You to the User*/
	printf("Thank You.");
	
	return 0;
}