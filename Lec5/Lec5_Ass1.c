#include <stdio.h>

/*Function Prototype*/
void Cube(int Num);

/*This is the main*/
int main()
{
	/*Intializing variables*/
	int Num;
	
	/*Scanning the number from the user*/
	printf("Please, Enter any Number: ");
	scanf("%d", &Num);

	/*Calling the function that prints the cube of the number*/
	Cube(Num);
	
	return 0;
}

/*Function Implementation*/
/*Fuction to print the cube of any number*/
void Cube(int Num)
{
	/*Calculate the cube of the numbers*/
	int CubicNum = Num * Num * Num;
	
	/*Printing the cube of the number*/
	printf("The cube of number %d is %d.", Num, CubicNum);
	
}
