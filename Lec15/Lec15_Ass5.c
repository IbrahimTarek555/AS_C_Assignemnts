#include <stdio.h>

/*New union type definition*/
typedef union
{
	char Fisrt_Name[30];
	char Last_Name[30];
}Family_Name;

/*This is the main*/
int main()
{
	/*Defining an union type variable*/
	Family_Name Var;
	
	/*Scanning the first name of Var from the user*/
	printf("Please, Enter the first name: ");
	scanf("%29s", Var.Fisrt_Name);
	
	/*Printing the second name of Var*/
	printf("Second_Name of var is: %s\n", Var.Last_Name);
	
	/*Printing the size of union Family_Name*/
	printf("Size of Family_Name union is: %d", sizeof(Family_Name));
	
	/*Returning to the operating system*/
	return 0;
}