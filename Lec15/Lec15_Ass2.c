#include <stdio.h>

/*New struct type definition*/
typedef struct
{
	int Real;
	int Imagine;
}ComplexNumber;

/*Function Prototype*/
void AddComplex(const ComplexNumber *Complex1, const ComplexNumber *Complex2, ComplexNumber *Result);

/*This is the main*/
int main()
{
	/*Defining variables*/
	ComplexNumber Complex1, Complex2, Result;
	
	/*Scanning varibles from the user*/
	printf("Real Part of the first complex is: ");
	scanf("%d", &Complex1.Real);
	
	printf("Imagine Part of the first complex is: ");
	scanf("%d", &Complex1.Imagine);

	printf("Real Part of the second complex is: ");
	scanf("%d", &Complex2.Real);

	printf("Imagine Part of the second complex is: ");
	scanf("%d", &Complex2.Imagine);

	
	/*Calling Function to add the complex numbers*/
	AddComplex(&Complex1, &Complex2, &Result);

	/*Printing the result*/
	printf("The result is %d + %di", Result.Real, Result.Imagine);
	
	/*Returning to operating system*/
	return 0;
}

void AddComplex(const ComplexNumber *Complex1, const ComplexNumber *Complex2, ComplexNumber *Result)
{
	
	/*Adding the numbers*/
	Result->Real = Complex1->Real + Complex2->Real;
	Result->Imagine = Complex1->Imagine + Complex2->Imagine;
}