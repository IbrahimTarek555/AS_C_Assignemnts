#include <stdio.h>

/*set, clr, toggle, get bit*/

/*Function Prototype*/
int SetBit(int Num, int BitNum);
int ClrBit(int Num, int BitNum);
int TogBit(int Num, int BitNum);
int GetBit(int Num, int BitNum);

/*This is the main*/
int main()
{
	/*Defining variables*/
	int Number, BitNumber, SetResult, ClrResult, TogResult, GetResult;
	
	/*Scanning the number from the user*/
	printf("Please, Enter the number: ");
	scanf("%d", &Number);
	
	printf("Please, Enter the bit number: ");
	scanf("%d", &BitNumber);

	
	/*Calling a function to set, clr, toggle, get required bit*/
	SetResult = SetBit(Number, BitNumber);
	ClrResult = ClrBit(Number, BitNumber);
	TogResult = TogBit(Number, BitNumber);
	GetResult = GetBit(Number, BitNumber);

	/*Printing Results of the previous functions*/
	printf("The number after setting the input bit number is %d.\n", SetResult);
	printf("The number after Clearing the input bit number is %d.\n", ClrResult);
	printf("The number after Toggling the input bit number is %d.\n", TogResult);
	printf("The required bit number of the number is %d.\n", GetResult);

	
	return 0;
}

/*Function Implementation*/
int SetBit(int Num, int BitNum)
{
	int Result = Num | (1 << BitNum);
	return Result;
}

int ClrBit(int Num, int BitNum)
{
	int Result = Num & (~(1 << BitNum));
	return Result;
}
int TogBit(int Num, int BitNum)
{
	int Result = Num ^ (1 << BitNum);
	return Result;
}
int GetBit(int Num, int BitNum)
{
	int Result = (Num >> BitNum) & 1;
	return Result;
}

