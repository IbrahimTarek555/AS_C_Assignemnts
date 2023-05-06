#include <stdio.h>

/*Function Prototype*/
int IntOnesBitsCounter(int Num);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, TotalOnes;
	
	/*Scanning the number from the user*/
	printf("Please, Enter the number: ");
	scanf("%d", &Num);
	
	/*Calling the function to get the number of ones that exists on the number*/
	TotalOnes = IntOnesBitsCounter(Num);
	
	/*Printing the number of ones exists on the number*/
	printf("Number of ones on %d is %d.", Num, TotalOnes);
	
	return 0;
}

/*Function Implementation*/
/*Function to return the number of ones that exists on a 32-bit integer*/
int IntOnesBitsCounter(int Num)
{
	/*Defining variables*/
	int i, TotalOnes = 0;
	
	/*Passing over all bits of 32 bit integer*/
	for(i = 0; i < 32; i++)
	{
		/*Getting the value of the bit*/
		if(((Num >> i) & 1) == 1)
		{
			/*If the value is one, update TotalOnes counter*/
			TotalOnes++;
		}
	}
	
	/*Returnning the TotalOnes counter*/
	return TotalOnes;
}
