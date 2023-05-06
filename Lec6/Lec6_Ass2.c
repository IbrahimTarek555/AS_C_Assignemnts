#include <stdio.h>

/*Function Prototype*/
int GetMaxSeqZeros(int Num);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Num, MaxZeros;
	
	/*Scanning the number from the user*/
	printf("Please, Enter the binary number: ");
	scanf("%d", &Num);
	
	/*Calling the function to get the maximum number of zeros between two ones on the number*/
	MaxZeros = GetMaxSeqZeros(Num);
	
	/*Printing the required number*/
	printf("Maximum number of sequential zeros is %d.", MaxZeros);
	
	return 0;
}

/*Function Implementation*/
/*Function to get the maximum number of zeros between two ones on the number*/
int GetMaxSeqZeros(int Num)
{
	/*Defining variables*/
	int i, MaxZeros = 0, Zeros = 0, Ones = 0;
	
	/*Passing over all bits of 32 bit integer*/
	for(i = 0; i < 32; i++)
	{
		/*Getting the value of the bit*/
		if((((Num >> i) & 1) == 0) && (Ones > 0))
		{
			/*If the value is Zero, update Zeros counter*/
			Zeros++;
		}
		else if(((Num >> i) & 1) == 1)
		{
			/*If Zeros counter exceed MaxZeros counter update MaxZeros counter*/
			if((Zeros > MaxZeros))
			{
				MaxZeros = Zeros;
			}

			/*Else if the value is one, reset Zeros counter*/
			Zeros = 0;
			Ones++;
		}
	}
	
	/*Returnning the MaxZeros counter*/
	return MaxZeros;
}
