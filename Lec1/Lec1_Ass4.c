#include <stdio.h>

/*This is the main function*/
int main()
{
	/*Declaring the variables*/
	float Redius, Area, Circumference;	
	
	/*Scanning the value of the redius*/
	printf("Enter the redius value: ");
	scanf("%f", &Redius);
	
	/*Calculating Area and Circumference*/
	Circumference = 2 * 3.14 * Redius;
	Area = 3.14 * Redius * Redius;
	
	/*Printing Area and Circumference*/
	printf("Area is %f and Circumference is %f", Area, Circumference);
	
	return 0;
}
