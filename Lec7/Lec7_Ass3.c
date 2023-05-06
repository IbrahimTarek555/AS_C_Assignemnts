#include <stdio.h>

/*Application on arrays*/


/*This is the main*/
int main()
{
	/*Defining variables*/
	int i, TermNum, Term;
	
	/*Scanning the term that user want to print*/
	printf("Please, Enter term number: ");
	scanf("%d", &TermNum);
	
	/*Calculating the wanted term of geometric series*/
	for(i = 0; i < TermNum; i++)
	{
		if(i == 0)
		{
			Term = 1;
		}
		else 
		{
			Term = Term * 3;
		}
	}

	/*Printing the required term*/
	printf("Term %d is %d\n", TermNum, Term);
		
	return 0;
}