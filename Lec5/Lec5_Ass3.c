#include <stdio.h>

/*Function Prototype*/
void PrintPrime(int Num1, int Num2);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num1, Num2;
	
	/*Scanning 2 intervals from the user*/
	printf("Pleae, Enter the first interval: ");
	scanf("%d", &Num1);
	
	printf("Pleae, Enter the second interval: ");
	scanf("%d", &Num2);

	/*Calling a function to Print the prime numbers between two intervals*/
	PrintPrime(Num1, Num2);
	
	return 0;
}

/*Function Implementation*/
/*A function to display prime numbers between two intervals*/
void PrintPrime(int Num1, int Num2)
{
	int x, y, i, j, Check, IfPrime;
	
	/*Sorting the intervals from the smaller to the bigger*/
	x = (Num1 < Num2)? Num1 : Num2;
	y = (Num1 > Num2)? Num1 : Num2;
	
	/*For Loop to Check every individual number from two intervals*/
	for(i = x; i <= y; i++)
	{
		/*IfPrime tell us how much times the number is devided without remainder*/
		IfPrime = 0;
		
		/*Checking if the number is prime or not.*/
		for(j = 1; j <= i; j++)
		{
			Check = i % j;
	
			if(Check == 0)
			{
				IfPrime++;
			}
		}
		
		/*If the number is prime, print it*/
		/*Note: 1 is for number 1, 2 is for any number else*/
		if((IfPrime == 1) || (IfPrime == 2))
		{			
			printf("%d\n", i);
		}
	}

}

