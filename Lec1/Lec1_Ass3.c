#include <stdio.h>

/*This is the main function*/
int main()
{
	/*Declaring the variables*/
	float CelsuisDegree, FehrenhaitDegree;	
	
	/*Scanning the values*/
	printf("Enter the dgree in celsuis: ");
	scanf("%f", &CelsuisDegree);
	
	/*Calculating the degree in Fehrenhait*/
	FehrenhaitDegree = (CelsuisDegree * 9.0/5.0) + 32.0;
	
	/*Printing the degree in Fehrenhait*/
	printf("The degree in Fehrenhait is: %f", FehrenhaitDegree);
	
	return 0;
}

