#include <stdio.h>
#include "STD_TYPES.h"

/*New type definition*/
typedef struct Employee{
uint32 Salary;
uint32 Bonus;
uint32 Deduction;
}Employee_t;

/*This is the main*/
int main()
{
	/*Defining variables*/
	Employee_t Ahmed, Amr, Amgad;
	uint32 FinanceReq = 0;
	
	/*Scanning inputs from the user*/
	printf("Enter Ahmed Salary: ");
	scanf("%d", &Ahmed.Salary);
	printf("Enter Ahmed Bonus: ");
	scanf("%d", &Ahmed.Bonus);
	printf("Enter Ahmed Deduction: ");
	scanf("%d", &Ahmed.Deduction);
	
	printf("Enter Amr Salary: ");
	scanf("%d", &Amr.Salary);
	printf("Enter Amr Bonus: ");
	scanf("%d", &Amr.Bonus);
	printf("Enter Amr Deduction: ");
	scanf("%d", &Amr.Deduction);

	printf("Enter Amgad Salary: ");
	scanf("%d", &Amgad.Salary);
	printf("Enter Amgad Bonus: ");
	scanf("%d", &Amgad.Bonus);
	printf("Enter Amgad Deduction: ");
	scanf("%d", &Amgad.Deduction);

	/*Calculating total financial requirements*/
	FinanceReq = Ahmed.Salary + Ahmed.Bonus - Ahmed.Deduction;
	FinanceReq = FinanceReq + Amr.Salary + Amr.Bonus - Amr.Deduction;
	FinanceReq = FinanceReq + Amgad.Salary + Amgad.Bonus - Amgad.Deduction;
	
	/*Printing total finance requirement*/
	printf("Total financial requirement is %d\n", FinanceReq);

	
	return 0;
}
	

