#include <stdio.h>

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, Reverse = 0, Assis;
	
	/*Message to the user*/
	printf("Enter the number: ");
	scanf("%d", &Num);
	Assis = Num;
	
	/*Converting the number to its reverse*/
	do
	{
		Reverse = (Reverse * 10) + (Assis % 10);
		Assis = Assis / 10;
	}
	while(Assis != 0);

	/*Printing the Reverse of the number*/
	printf("The Reverse of the number %d is %d.", Num, Reverse);
	
	return 0;
}