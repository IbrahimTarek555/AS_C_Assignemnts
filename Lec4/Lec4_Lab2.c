#include <stdio.h>

/*Login System*/

/*This is the main*/
int main()
{
	/*Intializing variables*/
	int ID;
	
	/*Scanning the ID from the user*/
	printf("Please, Enter you ID Number: ");
	scanf("%d", &ID);
	
	/*Checking the ID*/
	switch(ID)
	{
		case 1234: printf("Welconme Ahmed");
		break;
		case 5678: printf("Welconme Youssef");
		break;
		case 1145: printf("Welconme Mina");
		break;
		default: printf("Wrong ID");
	}
	return 0;
}