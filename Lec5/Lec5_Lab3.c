#include <stdio.h>

/*Function Prototype*/
void Swap(void);

/*Declaring two global variables*/
int Num1, Num2;


/*This is the main*/
int main()
{
	/*Scanning variables values from the user*/
	printf("Number 1 is: ");
	scanf("%d", &Num1);
	
	printf("Number 2 is: ");
	scanf("%d", &Num2);

	/*Printing numbers before swapping*/
	printf("Num1 is %d and Num2 is %d.\n", Num1, Num2);
	
	/*Calling the function to swap two numbers*/
	Swap();
	
	/*Printing numbers after swapping*/
	printf("Num1 is %d and Num2 is %d.\n", Num1, Num2);
	
	return 0;
}


/*Function Implementation*/
/*Function to swap two global numbers*/
void Swap(void)
{
	Num1 = Num1 * Num2;
	Num2 = Num1 / Num2;
	Num1 = Num1 / Num2;
}
