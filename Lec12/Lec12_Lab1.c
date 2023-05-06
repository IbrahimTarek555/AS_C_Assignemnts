#include <stdio.h>

/*Function Prototype*/
/*Function to add two matrices into third one*/
void ArraysSum(int Arr1[][3], int Arr2[][3], int SumArr[][3], int Raws, int Columns);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Arr1[3][3] = {0}, Arr2[3][3] = {0}, SumArr[3][3] = {0}, i, j;
	
	/*Scanning arrays values from the user*/
	printf("Please, Enter the elements of the first matrix: \n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Please, Enter the element for raw %d and column %d: ", (i + 1), (j + 1));
			scanf("%d", (*(Arr1 + i) + j));
		}
	}
	
	printf("Please, Enter the elements of the second matrix: \n");	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("Please, Enter the element for raw %d and column %d: ", (i + 1), (j + 1));
			scanf("%d", (*(Arr2 + i) + j));
		}
	}

	/*Calling the function to return sum into third array*/
	ArraysSum(Arr1, Arr2, SumArr, 3, 3);
		
	/*Printing elements of the summation array*/
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(SumArr + i) + j));
		}
		printf("\n");
	}
	
	return 0;
}
	

/*Function Implementation*/
void ArraysSum(int Arr1[][3], int Arr2[][3], int SumArr[][3], int Rows, int Columns)
{
	/*Defining variables*/
	int i, j;

	/*Passing over the elements*/
	for(i = 0; i < Rows; i++)
	{
		for(j = 0; j < Columns; j++)
		{
			/*Calculating summation into third array*/
			*(*(SumArr + i) + j) = *(*(Arr1 + i) + j) + *(*(Arr2 + i) + j);
		}
	}
	
}
