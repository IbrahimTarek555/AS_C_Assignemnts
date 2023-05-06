#include <stdio.h>
#include "STD_TYPES.h"

/*This is the main*/
int main()
{
	/*Defining variables*/
	uint x = 83;
	sint y = -83;
	unsigned int x = -1;
	
	/*Lab on unsigned and signed representation*/
	printf("Unsigned Representation of -1 is %u\n", x);
	printf("Decimal Representation of -1 is %d\n", x);
	
	/*Pirnting sizes of variables in our compiler*/
	printf("Size of char is %d\n", sizeof(char));
	printf("Size of short int is %d\n", sizeof(short int));
	printf("Size of long int is %d\n", sizeof(long signed int));
	printf("Size of float is %d\n", sizeof(float));
	printf("Size of double is %d\n", sizeof(double));
	printf("Size of long double is %d\n", sizeof(long double));
	
	/*Printing values of x and y*/
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	

	return 0;
}
	

