#include <stdio.h>

/*This is the main*/
int main()
{
	
	/*Intializing variables*/
	int Salary, WorkingHours;
	
	/*Scanning the working hours from the user*/
	printf("Enter your total working hours: ");
	scanf(" %d", &WorkingHours);
		
	/*Calculating the salary*/
	Salary = WorkingHours * 50;
	
	/*Applying 10% deduction if the working hours is less than 40*/
	if(WorkingHours < 40)
	{
		Salary = Salary * 0.9;
	}
	
	/*Printing Salary*/
	printf("Your salary is %d\n", Salary);
	
	return 0;
}