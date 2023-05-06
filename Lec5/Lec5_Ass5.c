#include <stdio.h>

/*Function Prototype*/
char PowerCheck(int Num);

/*This is the main*/
int main()
{
	/*defining variables*/
	int Num, CheckValue;
	
	/*Scanning the number from the user*/
	printf("Please, Enter a number: ");
	scanf("%d", &Num);

	/*Calling the function that returns CheckValue*/
	CheckValue = PowerCheck(Num);
	
	/*Upon the CheckValue, we will print the result*/
	switch(CheckValue)
	{
		case 1: printf("The number %d is power of 2", Num);
		break;
		case 0: printf("The number %d is power of 3", Num);
		break;
		case -1: printf("The number %d is not power of 2 or 3", Num);
		break;
	}
	
	return 0;
}

/*Function Implementation*/
/*It will return 1, if Num is power of 2,
 *It will return 0, if Num is power of 3,
 *It will return -1, otherwise*/
char PowerCheck(int Num)
{
	char CheckValue = -1;
	
	/*Checking if the num is power of 2 or not*/
	if(Num != 1)
	{
		CheckValue = (((Num - 1) & Num) == 0)? 1 : -1;
	}

	/*Checking if the num is power of 3 or not*/
	while((Num % 3) == 0)
	{
		Num = Num / 3;
		if(Num == 1)
		{
			CheckValue = 0;
			break;
		}
		if(Num == 0)
		{
			break;
		}
	}
	
	return CheckValue;
}
