#include <stdio.h>

/*Application on arrays*/

/*Declaring Function*/
int Fibonacci(int TermNum);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int TermNum, i, Term, Assis;
	
	/*Defining Array*/
	int Arr[3];
	
	/*Scanning the term that user want to search*/
	printf("Please, Enter term number: ");
	scanf("%d", &TermNum);

	/*Getting the required term using Array*/
	
	/*Calculating the required term using loop*/
	for(i = 0; i < TermNum; i++)
	{
		if((i == 0) || (i == 1))
		{
			Arr[0] = 1;
			Arr[1] = 1;
		}
		else
		{
			/*Calculating term of i*/
			Arr[2] = Arr[0] + Arr[1];
			
			/*Swapping to pass the last two terms to Arr[0] and Arr[1]*/
			Arr[1] = Arr[1] * Arr[2];
			Arr[0] = Arr[1] / Arr[2];
			Arr[1] = Arr[1] / Arr[0];
		}
	}
	
	
	/*Printing the term required*/
	printf("The term %d of Fibonacci Numbers is %d", TermNum, Arr[2]);
	

	/*Getting the required term using recursion*/
	//Term = Fibonacci(TermNum);

	/*Printing the term required using recursion*/
	//printf("The term %d of Fibonacci Numbers is %d", TermNum, Term);

	
	return 0;
}


int Fibonacci(int TermNum)
{
	if((TermNum == 1) || (TermNum == 2))
	{
		return 1;
	}
	else
	{
		return (Fibonacci(TermNum - 1) + Fibonacci(TermNum - 2));
	}
}