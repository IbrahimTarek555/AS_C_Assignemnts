#include <stdio.h>

/*Function Prototype*/
/*Function to get lowest and highest of a 2D array*/
void ArrayAnalysis(int Arr[][4], int Rows, int Columns, int *Max, int *Min);

/*This is the main*/
int main()
{
	/*Defining the Array*/
	int Arr[3][4] = {0}, Max, Min, i, j;
	
	/*Scanning array values from the user*/
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Please, Enter the grade of subject %d for student %d: ", j, i);
			scanf("%d", (*(Arr + i) + j));
		}
	}
	
	/*Calling the function to get Max and Min*/
	ArrayAnalysis(Arr, 3, 4, &Max, &Min);
		
	/*Printing result of the function*/
	printf("Highest grade is %d, Lowest grade is %d\n", Max, Min);
	return 0;
}
	

/*Function Implementation*/
void ArrayAnalysis(int Arr[][4], int Rows, int Columns, int *MaxPtr, int *MinPtr)
{
	/*Defining variables*/
	int i, j, Max = **Arr, Min = **Arr;

	/*Searching over the elements*/
	for(i = 0; i < Rows; i++)
	{
		for(j = 0; j < Columns; j++)
		{
			/*Get the highest grade*/
			if(*(*(Arr + i) + j) > Max)
			{
				Max = *(*(Arr + i) + j);
			}
			
			/*Get the Lowest grade*/
			if(*(*(Arr + i) + j) < Min)
			{
				Min = *(*(Arr + i) + j);
			}

		}
	}
	
	/*Assigning highest and lowest to the main*/
	*MaxPtr = Max;
	*MinPtr = Min;
}
