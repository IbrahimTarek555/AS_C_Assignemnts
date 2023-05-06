#include <stdio.h>

/*Application on arrays*/

/*With using array*/
/*This is the main*/
int main()
{
	/*Defining variables*/
	int i, TermNum, Term;
		
	/*Scanning the term that the user need to print*/
	printf("Please, Enter the term you need to print: ");
	scanf("%d", &TermNum);
	
	/*Computing the term wanted of Arithmatic Series with loop*/
	for(i = 0; i < TermNum; i++)
	{
		if(i == 0)
		{
			Term = 1;
		}
		else
		{
			Term = Term + 2;
		}
	}
	
	/*Computing the term wanted of Arithmatic Series with Arithmatic function*/
	Term = 1 + (2 * (TermNum - 1));
	
	/*Printing term value*/
	printf("Term %d is %d\n", TermNum, Term);
				
	return 0;
}
